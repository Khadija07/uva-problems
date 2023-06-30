#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d, m, y, d1, m1, y1, age;
    while(cin>>d>>m>>y)
    {
        cin>>d1>>m1>>y1;
        age =0;

        if(y<y1)
        {
            swap(y,y1);
        }
        age = y-y1;
        if(age<0)
        {
            cout<<"invalid"<<endl;
        }
        else if(m<m1 && age>0)
        {
            age = age - 1;
            if(age>1)
            {
                cout<<age<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        else if(m>m1 && age>0)
        {
            cout<<age<<endl;;
        }
        else if(m==m1 && age>0)
        {
            age = age - 1;
            cout<<age<<endl;
        }
        else if(age>130)
        {
            cout<<"check"<<endl;
        }
    }
}
