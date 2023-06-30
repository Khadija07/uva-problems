#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt, s[1005], t;
    while(cin>>t)
    {
        cnt=0;
        for(int i=0; i<t; i++)
        {
            cin>>s[i];
        }
        for(int j=0; j<t; j++)
        {
            for(int k=0; k<t-1; k++)
            {
                if(s[k]>s[k+1])
                {
                    swap(s[k],s[k+1]);
                    cnt++;
                }

            }
        }
        printf("Minimum exchange operations : %d\n",cnt);
    }

}
