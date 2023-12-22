#include<stdio.h>
int main()
{
    int n,r,sum=0,mult=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        mult=mult*r;
    }
    if(sum==mult)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}