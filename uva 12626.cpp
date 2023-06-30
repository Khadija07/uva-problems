#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
            int  cm=0, ca=0, cr=0, cg=0, ct=0, ci=0;

        cin>>s;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='M')
            {
                cm++;
            }
            else if(s[j]=='A')
            {
                ca++;
            }
            else if(s[j]=='R')
            {
                cr++;
            }
            else if(s[j]=='G')
            {
                cg++;
            }
            else if(s[j]=='I')
            {
                ci++;
            }
            else if(s[j]=='T')
            {
                ct++;
            }
            else
            {
                continue;
            }
        }
       int n1 = min( cm , ca/3);
        int n2 = min( n1 , cr/2);
        int n3 = min( n2 , cg);
        int n4 = min( n3 , ci);
        int n5 = min( n4 , ct);
        cout<<n5<<endl;
    }
}


/* 1
   AAAAAARRRRRRRRRRMMGGTTII
   */
