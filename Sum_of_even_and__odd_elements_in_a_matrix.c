#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum,even=0,odd=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(arr[i][j]%2==0)
            even+=arr[i][j];
            else
            odd+=arr[i][j];
        }
    }
    printf("%d %d",even,odd);
}