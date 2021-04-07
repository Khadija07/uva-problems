#include<bits/stdc++.h>
using namespace std;
long long int N, M, sum;
int main()
{
    int T, n;
    double P;
    vector<long long int>v;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>N;
        M = N;
        while(M>0)
        {
            n = M%10;
            v.push_back(n);
            M=M/10;
        }
        sum=0;
        for(long long int i=0; i<v.size(); i++)
        {
            P = (double)pow(v[i],v.size());
            sum = sum + P;

        }
        if(sum==N)
        {
            cout<<"Armstrong"<<endl;
        }
        else
        {
            cout<<"Not Armstrong"<<endl;
        }
        v.clear();
    }

}
