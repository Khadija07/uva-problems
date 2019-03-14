#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string>v;
    map<string,string>mp;
    while(getline(cin,s))
    {
        if(s.size()==0)
        {
            break;
        }
        istringstream ss(s);
        string s1;
        while(ss>>s1)
        {
            v.push_back(s1);
        }
        mp[v[1]] = v[0];
        v.clear();
    }
  string s2;
  while(cin>>s2)
  {

      if(mp.find(s2)!=mp.end())
      {
          cout<<mp[s2]<<endl;
      }
      else
      {
          cout<<"eh"<<endl;
      }
  }
  return 0;

}

   /* string s2;
    while(cin>>s2)
    {
        if(mp.find(s2)!=mp.end())
        {
            cout<<mp[s2]<<endl;
        }
        else
        {
            cout<<"eh"<<endl;
        }
    }
}*/
