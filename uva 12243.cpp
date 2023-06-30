#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    while(getline(cin,s))
    {
        if(s=="*")
        {
            break;
        }
        istringstream ss(s);
    string s1;
    vector<string>v;
    while(ss>>s1)
    {
        v.push_back(s1);
    }
    for( i=0; i<v.size(); i++)
    {
        if(v[i][0]>= 'A' && v[i][0] <= 'Z')
        {
            v[i][0] = v[i][0] + 32;
        }


    }
    int c = 0, j=0;

       for(int k=1; k<v.size(); k++)
        {
            if(v[j][0]==v[k][0])
        {
           c++;
        }
        j++;
        }

if(c==(v.size()-1))
    {
        cout<<"Y"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }

    }

    return 0;
}

