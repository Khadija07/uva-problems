#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        m = n;
        stack<int>s;
        while(m>0)
        {
            int mod = m%2;
            s.push(mod);
            m=m/2;

        }
        int cnt = 0;
        while(s.size()>0)
        {
            if(s.top()==1)
            {
                cnt++;
            }
            s.pop();
        }
        int k=0, modd, dec=0;
        while(n>0)
        {
            int modd = n%10;
            dec = dec + (modd*(pow(16,k)));
            n = n/10;
            k++;
        }
        stack<int>s1;
        while(dec>0)
        {
            int m1 = dec%2;
            s1.push(m1);
            dec = dec/2;

        }
        int sum = 0;
        while(s1.size()>0)
        {
            if(s1.top()==1)
            {
                sum++;
            }
            s1.pop();
        }
        cout<<cnt<<" "<<sum<<endl;
    }
}
