#include<stdio.h>
int main()
{
    int l,b,c,w,nl,nb,ar,tr,parea,cost,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=l*b;
    nl=l+(2*w);
    nb=b+(2*w);
    ar=nl*nb;
    tr=ar-area;
    cost=c*tr;
    printf("%d",cost);
}