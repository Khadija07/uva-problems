#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, mod;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        m = n*567;
        m = m/9;
        m = m + 7492;
        m = m*235;
        m = m/47;
        m = m-498;

        m = m/10;
        m = abs(m);
        mod = m%10;
        cout<<mod<<endl;
    }
}
