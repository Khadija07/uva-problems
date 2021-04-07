#include<bits/stdc++.h>
using namespace std;
vector<char>node[50005];
vector<char>v1;
vector<char>v2;
bool visited[50005] = {false};
int cnt;
void dfs(long long int N)
{
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
    long long int n,m;
    long long int i, j;

    while(cin>>n>>m)
    {
         cnt=0;
        if(n==0 && m==0)
        {
            break;
        }
            memset(visited,false,sizeof(visited));

        for(int x=0; x<m; x++)
        {
            cin>>i>>j;
            v2.push_back(i);
            v2.push_back(j);
            node[i].push_back(j);
            node[j].push_back(i);
        }
        for(int x=0; x<n; x++)
        {
            if(visited[x]==false)
            {
                cnt++;
                dfs(x);
            }
        }
        cout<<cnt<<endl;
        for(int x=0; x<=n; x++)
        {
            node[i].clear();
        }
    }

}

