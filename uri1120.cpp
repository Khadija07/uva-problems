#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    char c;
    string s;
    while(cin>>c)
    {
        cin>>s;
        if(s=="0" && c=='0')
        {
            break;
        }
    int f=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=c && s[i]!='0')
        {
            cout<<s[i];
            f++;
        }
    }
    if(f==0)
    {
        cout<<f;
    }
    printf("\n");
}

    }
