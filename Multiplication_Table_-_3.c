#include<stdio.h>
int main()
{
    int a,b,i,x;
    scanf("%d%d%d",&a,&b,&x);
    for(i=b;i<=x;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}