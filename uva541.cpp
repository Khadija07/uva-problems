#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m[105][105], sum;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

        for(int i=0; i<n; i++)
        {
              sum =0;
            for(int j=0; j<n; j++)
            {
                cin>>m[i][j];
                sum = sum + m[i][j];
            }
            v.push_back(sum);
        }
        for(int i=0; i<n; i++)
        {
            sum = 0;
            for(int j=0; j<n; j++)
            {

                sum = sum + m[j][i];
            }
            v1.push_back(sum);
        }

        int f=0, f1=0;
       for(int i=0; i<n; i++)
       {
           if((v[i]%2!=0))
           {
               v2.push_back(i);
               f++;
           }
           if((v1[i]%2!=0))
           {
               v3.push_back(i);
               f1++;
           }
       }

       if(f==0 && f1==0)
       {
           cout<<"OK"<<endl;
       }
       else if(f==f1 && f!=0)
       {
           for(int i=0; i<v2.size(); i++)
           {
               printf("Change bit (%d,%d)\n",v2[i]+1,v3[i]+1);
           }
       }
       else
       {
           printf("Corrupt\n");
       }
       v.clear();
       v1.clear();
       v2.clear();
       v3.clear();

    }
}
