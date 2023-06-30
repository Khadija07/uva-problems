#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans, m, a;
    while(cin>>n)
    {
      if(n%3==0)
      {
          ans = n+(n/3)+1;
      }
      else
      {
          if(n<3)
          {
              a = n+1;
              ans = (a/3)+n;

          }
          else if(n>3)
          {
              a = n-1;
              if(a%3==0)
              {
                m = a%3;
                ans=n+m+(a/3);
                cout<<n<<m;
              }
              else
              {
                  a = n+1;
                  m = a%3;
                ans=n+m+(a/3);

              }
          }
      }
      cout<<ans<<endl;
    }
}
