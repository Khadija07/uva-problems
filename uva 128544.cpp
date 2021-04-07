#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j, k;
    string str,s2 ;
    getline(cin,str);
    string strWords[str.length()], s1[str.length()], s3[str.length()];
    short counter = 0;
    j=0;
    for(short i=0;i<str.length();i++){
        strWords[counter] += str[i]; // Append fixed
        if(str[i] == ' '){
                s1[j++] = strWords[counter];
                s1[j++]=' ';
            counter++;
        }
    }
    k=0;
    for(short i=0;i<5;i++){
        if(s1[i]!=' ')
        {
            s2 = s1[i];
            reverse(s2.begin(),s2.end());
            s3[k++] = s2;
        }
        else
        {
            s3[k++] = ' ';
        }
    }
    for(int i=0; i<s3.size; i++)
    {
        cout<<s3[i];
    }
    return 0;
}
