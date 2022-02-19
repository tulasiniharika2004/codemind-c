#include<stdio.h>
int main()
{
    int a,b,i,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b*i;i++)
    {
        if((b*i)%a==0)
        {
            lcm=b*i;
            break;
        }
    }
    printf("%d",lcm);
}