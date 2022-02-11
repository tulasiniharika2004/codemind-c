#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a;
    scanf("%d",&a);
    while(a>0)
    {
        a+=reverse(a);
        if(a==reverse(a))
        {
            printf("%d",a);
            break;
        }
    }
        
    }
