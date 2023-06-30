#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, c;
    vector<int>v;
    vector<int>v1;
    while(cin>>x)
    {
        v.push_back(x);
        for(int i=1; i<=4; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<5; i++)
        {
            cin>>y;
            v1.push_back(y);
        }

        c=0;
        for(int i=0; i<5; i++)
        {
            if((v[i]==0 && v1[i]==1) || (v[i]==1 && v1[i]==0))
            {
                continue;
            }
            else
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
        v.clear();
        v1.clear();

}
}
