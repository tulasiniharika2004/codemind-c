#include<stdio.h>
int main()
{
    int n,m,i,a;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            a=i*n;
            printf("%d x %d = %d
",n,i,a);
        }
    }
}