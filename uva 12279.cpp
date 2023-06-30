#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a, c, E;
    int j=1;
    while(scanf("%d",&x))
    {
        if(x==0)
        {
            break;
        }
        c=0;
        a=0;
        for(int i=0; i<x; i++)
        {
            cin>>y;
            if(y==0)
            {
                c++;
            }
            else
            {
                a++;
            }
        }
        E = a - c;
        printf("Case %d: %d\n",j,E);
        j++;
    }


}
