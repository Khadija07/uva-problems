#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int T=1;
    while(getline(cin,s))
    {
        if(s=="*")
        {
            break;
        }
        else if(s=="Hajj")
        {
         printf("Case %d: Hajj-e-Akbar\n",T);
        }
        else if(s=="Umrah")
        {
         printf("Case %d: Hajj-e-Asghar\n",T);

        }
        T++;
    }
    return 0;
}
