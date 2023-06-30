#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string s; int T =0,i;
    while(getline(cin,s))
    {
        T = T+1;
        for(i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                s[i] = s[i] - 32;
            }
        }
        if(s=="#")
        {
            break;
        }
        else if(s=="HELLO")
        {
            printf("Case %d: ENGLISH\n",T);
        }
        else if(s=="HOLA")
        {
            printf("Case %d: SPANISH\n",T);
        }
        else if(s=="HALLO")
        {
            printf("Case %d: GERMAN\n",T);
        }
        else if(s=="BONJOUR")
        {
            printf("Case %d: FRENCH\n",T);
        }
        else if(s=="CIAO")
        {
            printf("Case %d: ITALIAN\n",T);
        }
        else if(s=="ZDRAVSTVUJTE")
        {
            printf("Case %d: RUSSIAN\n",T);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",T);
        }
    }
    return 0;
}
