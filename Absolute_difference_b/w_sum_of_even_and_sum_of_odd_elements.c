#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,add=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        sum=sum+arr[i];
        else
        add=add+arr[i];
    }
    printf("%d",abs(sum-add));
}