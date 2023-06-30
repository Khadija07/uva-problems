#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int N, b=0, w=0, a=0, T=0;
        cin>>N;
        cin>>s;
        for(int j=0; j<N; j++)
        {
            if(s[j]=='B')
               {
                   b++;
               }
           else if(s[j]=='W')
           {
               w++;
           }
           else if(s[j]=='A')
           {
               a++;
           }
           else if(s[j]=='T')
           {
               T++;
           }
        }
        if(b==N)
        {
          printf("Case %d: BANGLAWASH\n",i+1);

        }
        else if(b>0 && w==0)
        {

          printf("Case %d: BANGLAWASH\n",i+1);

        }
        else if(w==N)
        {
            printf("Case %d: WHITEWASH\n",i+1);

        }
        else if(w>0 && b==0)
        {

            printf("Case %d: WHITEWASH\n",i+1);

        }
        else if(a==N)
        {
            printf("Case %d: ABANDONED\n",i+1);
        }
        else if((b==w) && (a==0) && (T!=0))
        {
            printf("Case %d: DRAW %d %d\n",i+1,b,w);
        }
        else if((b==w) && (a==0) && (T==0))
        {
            printf("Case %d: DRAW %d %d\n",i+1,b,T);
        }
        else if(b>w)
        {
            printf("Case %d: BANGLADESH %d-%d\n",i+1,b,w);
        }
        else if(w>b)
        {
            printf("Case %d: WWW %d-%d\n",i+1,w,b);
        }

    }
}
