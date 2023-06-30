#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int c, b, h, w, bud[10005], bed[1005], min=0;
    while(scanf("%d%d%d%d",&c,&b,&h,&w))
    {
        for(int i=0; i<h; i++)
        {
            cin>>bud[i];
            for(int j=0; j<w; j++)
            {
                cin>>bed[j];
                if(bed[j]==c)
                {
                    min = bud[i]*c;
                }
            }

        }
        if(min==0)
        {
            cout<<"stay home"<<endl;
        }
        else{
            cout<<min<<endl;
        }

    }
    return 0;
}
