#include<bits/stdc++.h>
using namespace std;
char m[100][100];
int r, c;
int fx[] = {0, -1, 0, 1, -1, 1, -1, 1};
int fy[] = {-1, 0, 1, 0, 1, 1,-1, -1};
bool visited[5000][5000] = {false};
void dfs(int p, int q)
{
    int x, y;
    visited[p][q] = 1;
    for(int t=0; t<8; t++)
    {
        x = p+fx[t];
        y = q+fy[t];
        if(x>=0 && x<=r && y>=0 && y<=c && m[x][y]!='*')
        {
            dfs(x,y);
        }
    }
}
int main()
{
    while(cin>>r>>c)
    {
        if(r==0 && c==0)
        {
            break;
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>m[i][j];
            }
        }
    int cnt=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(m[i][j]=='@')
            {
                if(visited[i][j]==0)
                {
                    dfs(i,j);
                    cnt++;
                }
            }
        }
    }

    cout<<cnt<<endl;
    }
}
