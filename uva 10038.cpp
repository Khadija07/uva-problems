#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, x, n[10005];
    set<long long int>st;

    while(cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            cin>>n[i];
        }
        x=0;
        for(int i=0; i<t-1; i++)
        {
                x = abs(n[i] - n[i+1]);
                st.insert(x);

        }
        set<long long int> :: iterator it;
        int c=0;
        for(it=st.begin(); it!=st.end(); it++)
        {
            if(*it<t)
            {
                c++;
            }
        }
        if(c==t-1)
        {
            cout<<"Jolly"<<endl;

        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
            st.clear();

    }
}
