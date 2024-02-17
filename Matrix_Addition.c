#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr1[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int c,d;
    scanf("%d%d",&c,&d);
    int arr2[c][d];
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("
");
    }
}