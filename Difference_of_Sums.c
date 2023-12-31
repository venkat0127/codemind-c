#include<stdio.h>
int main()
{
    int i,n,k,s,q,sum=0,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i*i;
        sum=sum+k;
    }
    for(i=1;i<=n;i++)
    {
        a=a+i;
        q=a*a;
    }
    s=q-sum;
    printf("%d",s);
}