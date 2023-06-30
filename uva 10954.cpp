#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
    priority_queue<int,  vector <int>,   greater <int> > pq;
        int  cost=0, total=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            pq.push(x);
        }
        while(pq.size()>1)
        {
            y = pq.top();
            pq.pop();

            int z = pq.top();
            pq.pop();
            total = y+z;
            pq.push(total);
            cost = cost + total;
        }
        cout<<cost<<endl;
    }
}
