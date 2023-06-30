#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double p;
    while(scanf("%d",&n))
    {
        int sum = 0;
        if(n==0)
        {
            break;

        }
        for(int i=0; i<=n; i++)
        {
            p = pow(i,2);
            sum = sum + p;
        }
        cout<<sum<<endl;
    }
}
