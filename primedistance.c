#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the starting integer:");
scanf("%d",&a);
printf("enter the ending integer:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
printf("%d\n",i);
}
return 0;
}
