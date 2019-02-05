#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter the starting integer:");
	scanf("%d",&b);
	printf("enter the ending integer:");
	scanf("%d",&b);
	for(i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
