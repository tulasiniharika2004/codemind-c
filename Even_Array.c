#include<stdio.h>
int main()
{
    int i,n,arr[100],c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            c=1;
            printf("False");
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
}