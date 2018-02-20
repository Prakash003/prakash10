#include<stdio.h>
int main()
{
int a,b,d;
scanf("%d%d%d",&a,&b,&d);
if((a>b)&&(a>d))
printf("a is greater");
else if((b>a)&&(b>d))
printf("b is greater");
else
printf("d is greater");
}
