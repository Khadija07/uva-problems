#include<bits/stdc++.h>
using namespace std;
long long int v;
int i;
long long int sum1(long long int n)
{
    long long int M, add=0, t;
    while(n>0)
    {
        if(n==1)
        {
            printf("Case #%d: %lld is a Happy number.\n",i+1,v);
            break;
        }
        while(n>0)
        {
            M = n%10;
            add = add + (M*M);
            n = n/10;
        }
        t = add;
        if(t==v || t==4)
        {
            printf("Case #%d: %lld is an Unhappy number.\n",i+1,v);

            break;
        }
        return sum1(t);

    }
}


int main()
{
    long long int N;
    int T;
    while(cin>>T)
    {
            i=-1;

        for(int j=0; j<T; j++)
        {
            cin>>N;
            i++;
            v = N;
            sum1(N);
        }

    }

}

