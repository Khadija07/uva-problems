#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<int>v;
    vector<char>v1;
    while(getline(cin,s))
    {
        reverse(s.begin(),s.end());
        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];

            if(s[i]=='a')
            {
                v.push_back(79);
            }
            else if(s[i]=='79')
            {
                v1.push_back('a');
            }
            else if(s[i]=='b')
            {
                v.push_back(89);
            }
            else if(s[i]==89)
            {
                v.push_back('b');
            }
            else if(s[i]=='c')
            {
                v.push_back(99);
            }
            else if(s[i]==99)
            {
                v.push_back('c');
            }
            else if(s[i]=='d')
            {
                v.push_back(001);
            }
            else if(s[i]==001)
            {
                v.push_back('d');
            }
            else if(s[i]=='e')
            {
                v.push_back(101);
            }
            else if(s[i]==101)
            {
                v.push_back('e');
            }
            else if(s[i]=='f')
            {
                v.push_back(201);
            }
            else if(s[i]==201)
            {
                v.push_back('f');
            }
            else if(s[i]=='g')
            {
                v.push_back(301);
            }
            else if(s[i]==301)
            {
                v.push_back('g');
            }
            else if(s[i]=='h')
            {
                v.push_back(401);
            }
            else if(s[i]==401)
            {
                v.push_back('h');
            }
            else if(s[i]=='i')
            {
                v.push_back(501);
            }
            else if(s[i]=501)
            {
                v.push_back('i');
            }
            else if(s[i]=='j')
            {
                v.push_back(601);
            }
            else if(s[i]==601)
            {
                v.push_back('j');
            }
            else if(s[i]=='k')
            {
                v.push_back(701);
            }
            else if(s[i]==701)
            {
                v.push_back('k');
            }
            else if(s[i]=='l')
            {
                v.push_back(801);
            }
            else if(s[i]==801)
            {
                v.push_back('l');
            }
            else if(s[i]=='m')
            {
                v.push_back(901);
            }
            else if(s[i]==901)
            {
                v.push_back('m');
            }
            else if(s[i]=='n')
            {
                v.push_back(011);
            }
            else if(s[i]==011)
            {
                v.push_back('n');
            }
            else if(s[i]=='o')
            {
                v.push_back(111);
            }
            else if(s[i]==111)
            {
                v.push_back('o');
            }
            else if(s[i]=='p')
            {
                v.push_back(211);
            }
            else if(s[i]==211)
            {
                v.push_back('p');
            }
            else if(s[i]=='q')
            {
                v.push_back(311);
            }
            else if(s[i]==311)
            {
                v.push_back('q');
            }
            else if(s[i]=='r')
            {
                v.push_back(411);
            }
            else if(s[i]==411)
            {
                v.push_back('r');
            }
            else if(s[i]=='s')
            {
                v.push_back(511);
            }
            else if(s[i]==511)
            {
                v.push_back('s');
            }
            else if(s[i]=='t')
            {
                v.push_back(611);
            }
            else if(s[i]==611)
            {
                v.push_back('t');
            }
            else if(s[i]=='u')
            {
                v.push_back(711);
            }
            else if(s[i]==711)
            {
                v.push_back('u');
            }
            else if(s[i]=='v')
            {
                v.push_back(811);
            }
            else if(s[i]==811)
            {
                v.push_back('v');
            }
            else if(s[i]=='w')
            {
                v.push_back(911);
            }
            else if(s[i]==911)
            {
                v.push_back('w');
            }
            else if(s[i]=='x')
            {
                v.push_back(021);
            }
            else if(s[i]==021)
            {
                v.push_back('x');
            }
            else if(s[i]=='y')
            {
                v.push_back(121);
            }
            else if(s[i]==121)
            {
                v.push_back('y');
            }
            else if(s[i]=='z')
            {
                v.push_back(221);
            }
            else if(s[i]==221)
            {
                v.push_back('z');
            }
            else if(s[i]=='A')
            {
                v.push_back(56);
            }
            else if(s[i]=='B')
            {
                v.push_back(66);
            }
            else if(s[i]=='C')
            {
                v.push_back(76);
            }
            else if(s[i]=='D')
            {
                v.push_back(86);
            }
            else if(s[i]=='E')
            {
                v.push_back(96);
            }
            else if(s[i]=='F')
            {
                v.push_back(07);
            }
            else if(s[i]=='G')
            {
                v.push_back(17);
            }
            else if(s[i]=='H')
            {
                v.push_back(27);
            }
            else if(s[i]=='I')
            {
                v.push_back(37);
            }
            else if(s[i]=='J')
            {
                v.push_back(47);
            }
            else if(s[i]=='K')
            {
                v.push_back(57);
            }
            else if(s[i]=='L')
            {
                v.push_back(67);
            }
            else if(s[i]=='M')
            {
                v.push_back(77);
            }
            else if(s[i]=='N')
            {
                v.push_back(87);
            }
            else if(s[i]=='O')
            {
                v.push_back(97);
            }
            else if(s[i]=='P')
            {
                v.push_back(8);
            }
            else if(s[i]=='Q')
            {
                v.push_back(18);
            }
            else if(s[i]=='R')
            {
                v.push_back(28);
            }
            else if(s[i]=='S')
            {
                v.push_back(38);
            }
            else if(s[i]=='T')
            {
                v.push_back(48);
            }
            else if(s[i]=='U')
            {
                v.push_back(58);
            }
            else if(s[i]=='V')
            {
                v.push_back(68);
            }
            else if(s[i]=='W')
            {
                v.push_back(78);
            }
            else if(s[i]=='X')
            {
                v.push_back(88);
            }
            else if(s[i]=='Y')
            {
                v.push_back(98);
            }
            else if(s[i]=='Z')
            {
                v.push_back(9);
            }
            else if(s[i]=='!')
            {
                v.push_back(33);
            }
            else if(s[i]==',')
            {
                v.push_back(44);
            }
            else if(s[i]=='.')
            {
                v.push_back(64);
            }
            else if(s[i]==':')
            {
                v.push_back(85);
            }
            else if(s[i]==';')
            {
                v.push_back(95);
            }
            else if(s[i]=='?')
            {
                v.push_back(36);
            }
            else if(s[i]==' ')
            {
                v.push_back(23);
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        printf("\n");
        v.clear();
    }
}
