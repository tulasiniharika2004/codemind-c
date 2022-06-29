#include<stdio.h>
int main()
{
    int r,i,j,s1=0,s2=0;
    scanf("%d",&r);
    int arr[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s1=s1+arr[i][i];
    }
    j=r-1;
    for(i=0;i<r;i++)
    {
        s2=s2+arr[i][j];
        j--;
    }
    printf("Principal Diagonal:%d
",s1);
    printf("Secondary Diagonal:%d
",s2);
}