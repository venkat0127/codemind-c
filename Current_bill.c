#include<stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d",&a);
    if(a<=199)
    {
        b=(a*1.20)+100;
        printf("%.2f",b);
    }
    else
    if(a>=200&&a<400)
    {
        b=(a*1.50)+100;
        printf("%.2f",b);
    }
    else
    if(a>=400&&a<600)
    {
        b=(a*1.80)+(a*1.80)*15/100;
        printf("%.2f",b);
    }
    else
    if(a>=600)
    {
        b=(a*2.00)+(a*2.00)*15/100;
        printf("%.2f",b);
    }
}