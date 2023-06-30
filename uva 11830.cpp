#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int a, b, k, c, sum;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        vector<long long int>v;
        cin>>a>>b>>k;
        c=0;
        for(int i=a; i<=b; i++)
        {
            if(i%k==0)
            {
                for(int j=1; j<=sqrt(i); j++)
                {
                    if(i%j==0)
                    {
                        v.push_back(j);
                        c++;
                        if(j!=(i/j))
                        {
                            v.push_back(i/j);
                            c++;

                        }
                    }
                }
            }
        }
        sum=0;
        for(int i=0; i<v.size(); i++)
        {
            sum = sum + v[i];

        }
        cout<<c<<" "<<sum<<endl;
        v.clear();
    }
}
