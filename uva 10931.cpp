#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t, n;
    while(scanf("%lld",&i))
    {
        if(i==0)
        {
            break;
        }
        n = i;
        stack<int>s;
        int cnt=0;
        while(n>0)
        {
            int m = n%2;
            s.push(m);
            if(m==1)
            {
                cnt++;
            }
            n = n/2;
        }
        cout<<"The parity of ";
        while(s.size()>0)
        {
            cout<<s.top();
            s.pop();
        }
        printf(" is %d (mod 2).\n",cnt);

    }
}
