#include<stdio.h>
int main()
{
    int n,i;
    float sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%.2f",sum/n);
}