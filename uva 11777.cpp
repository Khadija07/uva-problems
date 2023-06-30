#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, t1, t2, f, a, s[4], total, sum, avg;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>t1>>t2>>f>>a;
        for(int i=0; i<3; i++)
        {
            cin>>s[i];
        }
        sort(s,s+3);

        sum=0;
        for(int i=1; i<3; i++)
        {
            sum = sum + s[i];
        }
        avg = sum/2;
        total = t1 + t2 + f + a +avg;
        if(total>=90)
        {
            printf("Case %d: A",t+1);
        }
        else if(total>=80 && total<90)
        {
             printf("Case %d: B",t+1);
        }
        else if(total>=70 && total<80)
        {
             printf("Case %d: C",t+1);
        }
        else if(total>=60 && total<70)
        {
             printf("Case %d: D",t+1);
        }
        else if(total<60)
        {
             printf("Case %d: F",t+1);
        }
        printf("\n");
    }

}
