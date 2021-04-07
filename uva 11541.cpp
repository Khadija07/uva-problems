#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    vector<int>v1;
    string s;
    char x;
    int  t, k, X, y, p, S;

    cin>>t;
    int K=0;

    while(t--)
    {
        cin>>s;
        k=1, y=1;
        while(y<s.size())
        {
            k=y;
            x = s[k];
            int V;
            if(x=='0' || x=='1' || x=='2' || x=='3' || x=='4' || x=='5' || x=='6' || x=='7' || x=='8' || x=='9')
            {
                X = x - 48;
                y = k;
                v1.push_back(X);
                while(s[k-1]=='0' || s[k-1]=='1' || s[k-1]=='2' || s[k-1]=='3' || s[k-1]=='4' || s[k-1]=='5' || s[k-1]=='6' || s[k-1]=='7' || s[k-1]=='8' || s[k-1]=='9')
                {
                    x = s[k-1];
                    X = x - 48;
                    v1.push_back(X);
                    k--;
                }
                if(v1.size()==1)
                {
                    for(int i=0; i<X; i++)
                    {
                        v.push_back(s[k-1]);
                        V = X;
                    }
                }
                else
                {
                    S = v1[0];
                    for(int i=1; i<v1.size(); i++)
                    {
                        p = pow(10,i);
                        S = S + v1[i]*p;
                    }
                    for(int i=0; i<(S-V); i++)
                    {
                        v.push_back(s[k-1]);
                    }
                }

            }
            y++;
            v1.clear();

        }
        printf("Case %d: ",K+1);
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        K++;
        v.clear();
        cout<<endl;
    }
}

