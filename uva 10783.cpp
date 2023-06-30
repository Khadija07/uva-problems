#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T, n, a, b;
    cin>>T;
    for(int i=1; i<=T;i++)
    {
        int sum =0;
        cin>>a>>b;
        for(int j=a; j<=b; j++)
        {
            if(j%2!=0)
            {
                sum = sum + j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

