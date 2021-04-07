#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <char, int> mp;

    mp['A'] = 2;
    mp['B'] = 2;
    mp['C'] = 2;
    mp['D'] = 3;
    mp['E'] = 3;
    mp['F'] = 3;
    mp['G'] = 4;
    mp['H'] = 4;
    mp['I'] = 4;
    mp['J'] = 5;
    mp['K'] = 5;
    mp['L'] = 5;
    mp['M'] = 6;
    mp['N'] = 6;
    mp['O'] = 6;
    mp['P'] = 7;
    mp['Q'] = 7;
    mp['R'] = 7;
    mp['S'] = 7;
    mp['T'] = 8;
    mp['U'] = 8;
    mp['V'] = 8;
    mp['W'] = 9;
    mp['X'] = 9;
    mp['Y'] = 9;
    mp['Z'] = 9;

    string s;

    while(cin>>s)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i])!= mp.end())
            {
                cout<<mp[s[i]];
            }
            if(s[i]=='-')
            {
                cout<<"-";
            }
            if(s[i]=='1')
            {
                cout<<"1";
            }
            if(s[i]=='0')
            {
                cout<<"0";
            }

        }
        cout<<endl;

    }



}
