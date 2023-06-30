#include<stdio.h>
int main()
{

    int T, i;
    double C, d, C1,output;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
            scanf("%lf%lf",&C,&d);

    C1 = (5*(d)/9);
    output = C + C1;
    printf("Case %d: %0.2lf\n",i,output);


    }

    return 0;


}
