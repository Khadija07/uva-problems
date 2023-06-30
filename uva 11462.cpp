#include<bits/stdc++.h>
using namespace std;
long long int s[2000005];
int main()
{
    long long int t, i, j;
    while(scanf("%lld",&t))
    {
        if(t==0)
        {
            break;
        }
        for(i=0; i<t; i++)
        {
            cin>>s[i];
        }
        sort(s,s+t);
        for(j=0; j<t-1; j++)
        {
            cout<<s[j]<<" ";
        }
        printf("%lld\n",s[t-1]);
    }
}

