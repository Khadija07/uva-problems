#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,t, n;
    for(int i=0; i<100; i++)
    {
        cin>>n;
        if(n<0)
        {
            break;
        }
        if(n==0)
        {
            cout<<0;
        }

        stack<int>s;
        int cnt=0;
        while(n>0)
        {
            int m = n%3;
            s.push(m);
            n = n/3;
        }

        while(s.size()>0)
        {
            cout<<s.top();
            s.pop();
        }
        printf("\n");
}
return 0;
}

