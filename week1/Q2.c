#include<stdio.h>
int main()
{
	int num1, num2;
	
	printf("Enter two number:");
	scanf("%d%d",&num1, &num2);
	
	if(num1>num2)
	{
		printf("%d is maximum",num1);
	}
	if(num2>num1)
	{
		printf("%d is maximun",num2);
	}
	if(num1==num2)
	{
		printf("Both are equal");
		
	}
	return 0;
}
