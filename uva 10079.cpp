#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }

        long long int ans;
        ans = ((n*n)+n+2)/2;

        cout<<ans<<endl;
    }
}
