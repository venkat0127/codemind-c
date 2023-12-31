#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    float x,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=sqrt(i);
        sum=sum+x;
    }
    printf("%.2f",sum);
}