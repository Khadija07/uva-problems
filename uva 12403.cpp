#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum=0, n;
    string s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s;
        if(s=="report")
        {
            cout<<sum<<endl;
        }
        else
        {
            cin>>n;
        sum = sum + n;
        }


    }
}
