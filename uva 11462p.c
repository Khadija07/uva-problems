#include<stdio.h>
#define m 2000005
int main()
{
    int s[m], n, i, j;
    scanf("%d",&n);
    for( i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }
        for(j=0; j<n; j++)
        {
            printf("%d\t",s[j]);
        }
}
