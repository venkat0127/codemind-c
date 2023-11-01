#include<stdio.h>
int main()
{
    int n,r,v=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        v++;
        n=n/10;
    }
    printf("%d",v);
}