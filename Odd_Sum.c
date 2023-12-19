#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    {
        for(i=0;i<n;i++)
    if(arr[i]%2==1)
    sum+=arr[i];
    printf("%d",sum);
    }
}