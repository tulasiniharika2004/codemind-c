#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,x=0,y=0;
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='z')
        {
            x++;
        }
        if(s[i]=='o')
        {
            y++;
        }
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}