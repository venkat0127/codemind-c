#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b,count=0;
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(arr[i]==b)
        count++;
    }
    printf("%d",count);
}