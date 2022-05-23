#include<stdio.h>
int main()
{
    int n,r,i,e=0,o=0,count=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if (r%2==0)
        {
            e+=1;
        }
        else
        {
            o+=1;
        }
        n=n/10;
        count+=1;
    }
    if (count==e)
    {
        printf("Even");
    }
    else if (count==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}