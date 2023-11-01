#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        n=a*i;
        if(n%b==0)
        {
            printf("%d",n);
            break;
        }
    }
}