#include<stdio.h>
int main()
{
    int a=0,b,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a+=i;
    }
    printf("%d",a);
}