#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, p, N, P;
    while(cin>>n>>p)
    {
        P = (double)pow(p,(1/n));
        cout<<P<<endl;
    }
}
