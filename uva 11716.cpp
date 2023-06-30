#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int m, n, t;
    cin>>t;
    getchar();

    for(int k=0; k<t; k++)
    {
        getline(cin,s);
        n = s.size();
        m = sqrt(n);
        if((m*m)!=n)
        {
            cout<<"INVALID"<<endl;
            continue;
        }
        for(int i=0; i<m; i++)
        {
            for(int j=i; j<n; j+=m)
            {
                cout<<s[j];
            }
        }
        printf("\n");

    }
    return 0;
}
