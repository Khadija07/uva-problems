#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t, n, m, x, y, i;
    while(scanf("%d",&t))
    {
        if(t==0)
        {
            break;
        }
        cin>>n>>m;
        for(i=0;i<t; i++)
        {

            cin>>x>>y;
            if((x==n) || (y==m))
            {
                cout<<"divisa"<<endl;
            }
            else if(x>n && y>m)
            {
                cout<<"NE"<<endl;
            }
            else if(x<n && y<m)
            {
                cout<<"SO"<<endl;
            }
            else if(x<n && y>m)
            {
                cout<<"NO"<<endl;
            }
            else if(x>n && y<m)
            {
                cout<<"SE"<<endl;
            }
        }
    }
    return 0;
}
