#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        queue<int>q;
        priority_queue<int>pq;
        stack<int>st;
        int cnt = 0, a=0, b=0, c=0;
        for(int i=0; i<t; i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                int y;
                cin>>y;
                q.push(y);
                pq.push(y);
                st.push(y);
            }

            else if(x==2)
            {
                cnt++;
                if(st.size() > 0 && pq.size() > 0 && q.size() > 0)
                {
                    int z;
                    cin>>z;
                    if(z==q.front())
                    {
                        a++;
                    }
                    if(z==pq.top())
                    {
                        b++;
                    }
                    if(z==st.top())
                    {
                        c++;
                    }
                    q.pop();
                    pq.pop();
                    st.pop();
                }
            }
        }
            if(a==cnt && a>b && a>c)
            {
                cout<<"queue"<<endl;
            }
            else if(b==cnt && b>a && b>c)
            {
                cout<<"priority queue"<<endl;
            }
            else if(c==cnt && c>b && c>a)
            {
                cout<<"stack"<<endl;
            }
            else if ((a==cnt && b==cnt) || (b==cnt && c==cnt) || (c==cnt && a==cnt))
            {
                cout<<"not sure"<<endl;
            }
            else
            {
                cout<<"impossible"<<endl;
            }

    }
    return 0;
}
