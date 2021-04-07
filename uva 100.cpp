#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cnt;
ll fun(ll n)
{
    cnt++;
    if(n==1)
    {
        return 1;
    }


    else if(n%2==0)
    {
        return fun(n/2);
    }
    else
    {
        return fun((3*n)+1);
    }

}
int main()
{
ll a, b, mx, p, q;
    while(cin>>a>>b)
    {
        p = a;
        q = b;
        if(a>b)
        {
            swap(a,b);
        }

        mx=-1;
        for(int i=a; i<=b; i++)
        {
            cnt = 0;
            fun(i);
            if(mx<cnt)
            {
                mx = cnt;
            }
        }
        printf("%lld %lld %lld\n",p,q,mx);
    }

    return 0;
}


