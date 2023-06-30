#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int T, i, j, n;
    string s;
    cin>>T;
    for(i=0; i<T; i++)
    {
        vector<pair<int,string> >v;
        for(j=0; j<10; j++)
        {
            cin>>s>>n;
            v.push_back(make_pair(n,s));
        }
        sort(v.begin(),v.end());
       int mx = v[9].first;
       printf("Case #%d:\n",i+1);
        for(j=0; j<10; j++)
        {
            if(mx==v[j].first)
            {
                cout<<v[j].second<<endl;
            }
        }
        v.clear();
    }
}
