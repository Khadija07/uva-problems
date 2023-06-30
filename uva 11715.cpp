#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i=1;
    double a, b, c, A, s, T, v, u;
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        cin>>a>>b>>c;
        if(t==1)
        {
            A = (b-a)/c;

            s = (a*c)+(0.5*A*c*c);

            printf("Case %d: %0.3lf %0.3lf",i,s,A);
        }

        else if(t==2)
        {
            T = (b-a)/c;

            s = (a*T)+(0.5*c*T*T);

            printf("Case %d: %0.3lf %0.3lf",i,s,T);

        }
        else if(t==3)
        {
            v = sqrt((a*a)+(2*b*c));
            T = (v-a)/b;
            printf("Case %d: %0.3lf %0.3lf",i,v,T);
        }
        else if(t==4)
        {
            u = sqrt((a*a)-(2*b*c));
            T = (a-u)/b;
            printf("Case %d: %0.3lf %0.3lf",i,u,T);
        }
        i++;
        printf("\n");
    }
}
