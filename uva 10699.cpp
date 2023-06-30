#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int factor[300];
int ck,cnt,c,nn;
vector<int>v;
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void prime_factor (int n)
{
    ck = 0;c=0;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        cnt=0;
        while(n % prime[i] == 0)
        {
            if(cnt==0)
            {
                cnt++;
                c++;
            }
           n=n/prime[i];
        }
    }
    if(n > 1)
    {
        c++;
    }
  printf("%d : %d\n",nn,c);
}
int main()
{
    sieve(1000000);
    int n;
    while(cin >> n)
    {
        nn = n;
        if(n==0)
        {
            break;
        }
        prime_factor(n);

    }
}
