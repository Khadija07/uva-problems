#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t, a, b, c, i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if((a<b && a>c) || (a>b && a<c))
        {
            printf("Case %d: %d\n",i+1,a);
        }
        else if((b<a && b>c) || (b>a && b<c))
        {
            printf("Case %d: %d\n",i+1,b);
        }
        else if((c<b && c>a) || (a>b && c<a))
        {
            printf("Case %d: %d\n",i+1,c);
        }
    }
    return 0;
}
