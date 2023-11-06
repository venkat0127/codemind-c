#include<stdio.h>
int main()
{
    int n,v,r=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        v=n%10;
        r=r*10+v;
        n=n/10;
    }
    if(r==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}