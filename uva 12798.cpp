#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N, M, c, m, x;
    while(cin>>N>>M)
    {
        m=0;
        for(int i=0; i<N; i++)
        {
            c=0;
           for(int j=0; j<M; j++)
            {
                cin>>x;
                if(x>0)
                {
                    c++;
                }
            }
            if(c==M)
            {
                m++;
            }
        }
        cout<<m<<endl;
    }
}
