#include<stdio.h>
int main()
{
	int a,i,j;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=1;i<a;i++)
	{
		if(arr[i]<max)max=arr[i];
	}
	printf("%d",max);
}