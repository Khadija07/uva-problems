#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    getchar();
    for(int k=0; k<t; k++)
    {
        getline(cin,s);
        vector<int>v;
        istringstream ss(s);
        int x;
        while(ss>>x)
        {
            v.push_back(x);
        }
        int mx = 0;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=1; j<v.size(); j++)
            {
                if(v[i]!=v[j])
                {
                    mx = max(mx,__gcd(v[i],v[j]));
                }

            }
        }
        cout<<mx<<endl;

    }
    return 0;
}
