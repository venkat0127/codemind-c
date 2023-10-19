#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=0;
    b=(b+a)%3;
    if(b==0)
    {
        printf("NORMAL");
    }
    else if(b==1)
    {
        printf("HUGE");
    }
    else if(b==2)
    {
        printf("SMALL");
    }
}