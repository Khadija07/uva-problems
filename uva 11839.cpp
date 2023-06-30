#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, q[300], i, j, k, K;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        for(i=0; i<N; i++)
        {
            for(j=0; j<5; j++)
            {
                cin>>q[j];
            }
            int c = 0;
            for(k=0; k<5; k++)
            {
                if(q[k]<=127)
                {
                     K = k;
                    c++;

                }
            }

            if(c==1)
            {
                if(K==0)
                {
                    cout<<"A"<<endl;
                }
                else if(K==1)
                {
                    cout<<"B"<<endl;
                }
                else if(K==2)
                {
                    cout<<"C"<<endl;
                }
                else if(K==3)
                {
                    cout<<"D"<<endl;
                }
                else if(K==4)
                {
                    cout<<"E"<<endl;
                }

            }
            else
            {
                cout<<"*"<<endl;
            }

        }
    }
}
