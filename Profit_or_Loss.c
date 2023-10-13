#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(b>a)
    {
    c=b-a;
    printf("Profit",c);
}
    else if(a>b)
    {
    c=a-b;
        printf("Loss",c);
    }
    else
    {
        printf("No Profit and No Loss");
    }
}