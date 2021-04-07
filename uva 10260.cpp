#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int t[25];
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V' )
            {
                //cout<<"1";
                t[i] = 1;
            }
            else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z' )
            {
                //cout<<"2";
                t[i] = 2;
            }
            else if(s[i]=='D' || s[i]=='T' )
            {
                //cout<<"3";
                t[i] = 3;
            }
            else if(s[i]=='L' )
            {
                //cout<<"4";
                t[i] = 4;
            }
            else if(s[i]=='M' || s[i]=='N' )
            {
                //cout<<"5";
                t[i] = 5;
            }
            else if(s[i]=='R' )
            {
                //cout<<"6";
                t[i] = 6;
            }
            else
            {
                t[i] = 0;
            }
        }

        for(int i=0; i<s.length(); i++)
        {
            if((t[i]!=t[i-1]) && (t[i]!=0))
            {
                cout<<t[i];
            }
        }
        cout<<endl;
    }
}
