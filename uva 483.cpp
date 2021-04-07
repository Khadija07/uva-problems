#include<bits/stdc++.h>
using namespace std;
   void reverse(string str);

int main()
{
    string s;
    getline(cin, s);
    reverse(s);
    return 0;
}

void reverse(string str)
{
    int n = str.size();

    if(n == 1)
       cout << str << endl;
    else
    {
       cout << str[n - 1];
       reverse(str.substr(0,n-1));
    }
}

