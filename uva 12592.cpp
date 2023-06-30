#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    string s, s1;
    while(cin>>n)
    {
        getchar();
        map <string,string> mp;
        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            getline(cin,s1);
            mp[s] = s1;
        }
        cin>>q;
        getchar();
        for(int j=0; j<q; j++)
        {
            string s2;
            getline(cin,s2);
            if(mp.find(s2)!=mp.end())
            {
                cout<<mp[s2]<<endl;
            }
        }
    }
    return 0;
}
