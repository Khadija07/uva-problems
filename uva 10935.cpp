#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        queue<int>q;
        for(int i=0; i<n; i++)
        {
            q.push(i+1);
        }
        printf("Discarded cards:");

        for(int j=0; j<n; j++)
        {
            while(q.size()>1)
            {
                printf(" %d,",q.front());
                q.pop();
                int x = q.front();
                q.push(x);
                q.pop();

            }
        }
        printf("\n");
        printf("Remaining cards: %d\n",q.front());
    }
    return 0;


}
