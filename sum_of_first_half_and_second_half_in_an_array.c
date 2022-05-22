#include<stdio.h>
int main()
{
    int n,i,arr[100],s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        {
            s1+=arr[i];
        }
        else
        {
            s2+=arr[i];
        }
    }
    printf("%d
",s1);
    printf("%d
",s2);
       
}