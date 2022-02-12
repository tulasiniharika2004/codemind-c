#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if('a'==ch|| 'e'==ch || 'i'==ch || 'o'==ch || 'u'==ch || 'A'==ch || ch =='O' || ch =='E' || ch =='i' || ch =='U')
{
    printf("Vowel");
}
    else
    {
        printf("Consonant");
    }
}