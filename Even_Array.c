#include<stdio.h>
int main()
{
    int i,n,m,sum,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    {
        for(i=0;i<n;i++)
    if(arr[i]%2==0&&i%2==0)
    {
        count++;
    }
    }
    if(count>=n/2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}