#include<bits/stdc++.h>
using namespace std;
long long int  n[1000005];
int main()
{
    long long int t, m, k, v, i, j, T ;
    int cnt;
    while(cin>>t)
    {
        cin>>m;
        for( T=0; T<t; T++)
        {
            cin>>n[T];
        }
        for( j=0; j<m; j++)
        {
            cnt=0;
            cin>>k>>v;
            for( i=0; i<t; i++)
            {
                if(v==n[i])
                {
                    cnt++;
                    if(cnt==k)
                    {
                        cout<<i+1<<endl;
                        break;
                    }

                }
            }
            if(cnt<k)
            {
                cout<<"0"<<endl;
            }
        }
    }

}
