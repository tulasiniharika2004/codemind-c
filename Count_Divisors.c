#include<stdio.h>
int main()
{
    int I,r,K,count=0,i;
    scanf("%d%d%d",&I,&r,&K);
    for(i=I;i<=r;i++)
    {
        if(i%K==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}