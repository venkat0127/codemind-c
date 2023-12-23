#include<stdio.h>
int main()
{
    int a,x,max=0;
    scanf("%d",&a);
    while(a)
    {
        x=a%10;
        if(x>max)
        {
            max=x;
        }
        a=a/10;
    }
    printf("%d",max);
}