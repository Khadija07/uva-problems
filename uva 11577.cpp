#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>t;
    getchar();
    for(int i=0; i<t; i++)
    {
        getline(cin,s);

        int ca=0, cb=0,cc=0,cd=0,ce=0,cf=0,cg=0,ch=0,ci=0,cj=0,ck=0,cl=0,cm=0,cn=0,co=0,cp=0,cq=0,cr=0,cs=0,ct=0,cu=0,cv=0,cw=0,cx=0,cy=0,cz=0;
        int mx=-1;

        for(int j=0; j<s.size(); j++)
        {
            if(s[j]==' ')
            {
                continue;
            }
            if(s[j]>=65 && s[j]<=92)
            {
                s[j] = s[j] + 32;
            }
            if(s[j]=='a')
            {
                ca++;

                if(mx<ca)
                {
                    mx = ca;
                }

            }
            else if(s[j]=='b')
            {
                cb++;
                if(mx<cb)
                {
                    mx=cb;

                }
            }
            else if(s[j]=='c')
            {
                cc++;
                if(mx<cc)
                {
                    mx=cc;

                }
            }
            else if(s[j]=='d')
            {
                cd++;
                if(mx<cd)
                {
                    mx=cd;

                }
            }
            else if(s[j]=='e')
            {
                ce++;
                if(mx<ce)
                {
                    mx=ce;

                }
            }
            else if(s[j]=='f')
            {
                cf++;
                if(mx<cf)
                {
                    mx=cf;

                }
            }
            else if(s[j]=='g')
            {
                cg++;
                if(mx<cg)
                {
                    mx=cg;

                }
            }
            else if(s[j]=='h')
            {
                ch++;
                if(mx<ch)
                {
                    mx=ch;

                }
            }
            else if(s[j]=='i')
            {
                ci++;
                if(mx<ci)
                {
                    mx=ci;

                }
            }
            else if(s[j]=='j')
            {
                cj++;
                if(mx<cj)
                {
                    mx=cj;

                }
            }
            else if(s[j]=='k')
            {
                ck++;
                if(mx<ck)
                {
                    mx=ck;

                }
            }
            else if(s[j]=='l')
            {
                cl++;
                if(mx<cl)
                {
                    mx=cl;

                }
            }
            else if(s[j]=='m')
            {
                cm++;
                if(mx<cm)
                {
                    mx=cm;

                }
            }
            else if(s[j]=='n')
            {
                cn++;
                if(mx<cn)
                {
                    mx=cn;

                }
            }
            else if(s[j]=='o')
            {
                co++;
                if(mx<co)
                {
                    mx=co;

                }
            }
            else if(s[j]=='p')
            {
                cp++;
                if(mx<cp)
                {
                    mx=cp;

                }
            }
            else if(s[j]=='q')
            {
                cq++;
                if(mx<cq)
                {
                    mx=cq;

                }
            }
            else if(s[j]=='r')
            {
                cr++;
                if(mx<cr)
                {
                    mx=cr;

                }
            }
            else if(s[j]=='s')
            {
                cs++;
                if(mx<cs)
                {
                    mx=cs;

                }
            }
            else if(s[j]=='t')
            {
                ct++;
                if(mx<ct)
                {
                    mx=ct;

                }
            }
            else if(s[j]=='u')
            {
                cu++;
                if(mx<cu)
                {
                    mx=cu;

                }
            }
            else if(s[j]=='v')
            {
                cv++;
                if(mx<cv)
                {
                    mx=cv;

                }
            }
            else if(s[j]=='w')
            {
                cw++;
                if(mx<cw)
                {
                    mx=cw;

                }
            }
            else if(s[j]=='x')
            {
                cx++;
                if(mx<cx)
                {
                    mx=cx;

                }
            }
            else if(s[j]=='y')
            {
                cy++;
                if(mx<cy)
                {
                    mx=cy;

                }
            }
            else if(s[j]=='z')
            {
                cz++;
                if(mx<cz)
                {
                    mx=cz;

                }
            }

        }
        if(mx==ca)
        {
            cout<<"a";
        }
        if(mx==cb)
        {
            cout<<"b";
        }
        if(mx==cc)
        {
            cout<<"c";
        }
        if(mx==cd)
        {
            cout<<"d";
        }
        if(mx==ce)
        {
            cout<<"e";
        }
        if(mx==cf)
        {
            cout<<"f";
        }
        if(mx==cg)
        {
            cout<<"g";
        }
        if(mx==ch)
        {
            cout<<"h";
        }
        if(mx==ci)
        {
            cout<<"i";
        }
        if(mx==cj)
        {
            cout<<"j";
        }
        if(mx==ck)
        {
            cout<<"k";
        }
        if(mx==cl)
        {
            cout<<"l";
        }
        if(mx==cm)
        {
            cout<<"m";
        }
        if(mx==cn)
        {
            cout<<"n";
        }
        if(mx==co)
        {
            cout<<"o";
        }
        if(mx==cp)
        {
            cout<<"p";
        }
        if(mx==cq)
        {
            cout<<"q";
        }
        if(mx==cr)
        {
            cout<<"r";
        }
        if(mx==cs)
        {
            cout<<"s";
        }
        if(mx==ct)
        {
            cout<<"t";
        }
        if(mx==cu)
        {
            cout<<"u";
        }
        if(mx==cv)
        {
            cout<<"v";
        }
        if(mx==cw)
        {
            cout<<"w";
        }
        if(mx==cx)
        {
            cout<<"x";
        }
        if(mx==cy)
        {
            cout<<"y";
        }
        if(mx==cz)
        {
            cout<<"z";
        }
        printf("\n");
    }
}
