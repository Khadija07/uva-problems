#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, N, n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>N;
        int mx = 0;
        for(int j=0; j<N; j++)
        {
            cin>>n;
            if(n>mx)
            {
                mx = n;
            }
        }
        printf("Case %d: %d\n",i+1,mx);
    }
    return 0;
}
