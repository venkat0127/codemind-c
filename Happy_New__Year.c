#include <stdio.h>
int main() 
{
    int h,m,r;
    scanf("%d%d",&h,&m);
    r=(24*60)-((h*60)+m);
    printf("%d
",r);
}