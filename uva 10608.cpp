#include<bits/stdc++.h>
using namespace std;
bool visited[500000];
vector<long long int>node[500000];
vector<long long int>v2[500000];
vector<long long int>v1[500000];

int c;
void dfs(long long int N)
{
    c++;
    visited[N] = true;
    for(int x=0; x<node[N].size(); x++)
    {
        long long int v = node[N][x];
        if(visited[v]==false)
        {
            dfs(v);
        }
    }
}

int main()
{
    int n, m, f, l, T, F;
    int C[100];
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>n>>m;
        f=0;
        c=0;
        F=0;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            if(f==0)
            {
                l = x;
                f++;
            }
            node[x].push_back(y);
            node[y].push_back(x);
        }
        dfs(l);

        cout<<c<<endl;

    }

}
/*
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9
*/
