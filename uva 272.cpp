#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='"' && cnt==0)
            {
                printf("``");
                cnt++;
            }
            else if(s[i]=='"' && cnt==1)
            {
                printf("''");
                cnt=0;
            }
            else
            {
                cout<<s[i];
            }

        }
        printf("\n");
    }
}
