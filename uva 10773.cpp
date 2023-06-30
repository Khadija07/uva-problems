#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll j, s[1000];
ll prime(ll n)
{
    j=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        while(n%i==0 && n>0)
        {
            s[j] = i;
            n = n/i;
            j++;
        }
    }
    if(n>1)
    {
        s[j] = n;
    }
    else
    {
        j = j-1;
    }
}
int main()
{
    int c;
    ll a, b;
    while(cin>>a)
    {
        b = a;
        c=0;
        if(b<0)
        {
            a = abs(b);
            c++;
        }
        prime(a);

        if(c>0)
        {
            printf("%lld = -1",b);
            for(int k=0; k<=j; k++)
            {
                cout<<"*";
                printf("%lld",s[k]);
            }
        }
        else
        {
            if(j>0)
            {
                 printf("%lld = %lld",b,s[0]);

            for(int k=1; k<=j; k++)
            {
                cout<<"*";
                printf("%lld",s[k]);
            }
            }
            else
            {
                printf("%lld = %lld",b,s[0]);

            }

        }

        printf("\n");
    }
}
