#include<stdio.h>
int main()
{
    int n,i,a[100],m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
    
}
    
    
