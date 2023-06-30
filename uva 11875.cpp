#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, N, n[20], a;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        a = 0;
        cin>>N;
        for(int j=0; j<N; j++)
        {
            scanf("%d",&n[j]);
        }
        a = N/2;
        printf("Case %d: %d\n",i+1,n[a]);

    }
    return 0;
}
