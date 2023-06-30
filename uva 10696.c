#include<stdio.h>
int f(int n)
{
    return (n>=101)?n-10:f(f(n+11));
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0){break;}
        printf("f91(%d) = %d\n",n,f(n));
    }
    return 0;
}
