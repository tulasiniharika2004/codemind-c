#include<stdio.h>
int main()
{
    int a,b,i,r,x,k=0,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=i;
        k=0,c=0;
        while(x)
        {
            r=x%10;
            if(r!=0 && i%r==0)
            {
                k++;
            }
            x=x/10;
            c++;
        }
        if(c==k)
        {
            printf("%d ",i);
        }
    }
}