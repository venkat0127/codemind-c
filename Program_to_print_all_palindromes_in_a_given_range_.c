#include<stdio.h>
int main()
{
   int i,rem,rev,temp,a,b;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++){
      temp=i;
      rev=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
      }
      if(i==rev)
         printf("%d ",i);
   }
   return 0;
}