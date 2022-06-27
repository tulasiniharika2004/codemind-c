#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        int c=0;
        int last=0;
        scanf("%d%d",&l,&r);
        for(int i=l;i<=r;i++)
        {
            last=i%10;
            if(last==2||last==3||last==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
    return 0;
}