#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, diff[3001], n[3001];
    while(cin>>t)
    {

        for(int i=0; i<t; i++)
        {
            cin>>n[i];
            if(n[i]<0)
            {
                n[i] = abs(n[i]);
            }
        }
        for(int i=0; i<t-1; i++)
        {
            if(n[i]<n[i+1])
            {
                diff[i] = n[i+1] - n[i];

            }
            else
            {
                diff[i] = n[i] - n[i+1];
            }
        }
        int d = t-1;
        sort(diff,diff+d);

        int c = 0;
        for(int j=0; j<d; j++)
        {
            if(diff[j]==j+1)
            {
                continue;
            }
            else
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<"Jolly"<<endl;

        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
    }
}
