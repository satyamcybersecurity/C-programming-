// write a program to find if a number is positive or negative and if it is positive then find if it is odd or even //
# include<stdio.h>
int main()
{
	int a;
	printf("enter the integer value :");
	scanf("%d", &a);
	if(a>0)
	{
		printf("the integer value is positive \n");
		if(a%2 == 0)
		{
			printf("the integer value is even");
		}
		else
		{
			printf("the integer value is odd");
		}
	}
	else
	{
		printf("the integer value is negative");
	}
	return 0;
}
