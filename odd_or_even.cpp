// write a program to check if a number is odd or even //
# include<stdio.h>
int main()
{
	int a;
	printf("enter your number :");
	scanf("%d", &a);
	if(a%2 == 0)
	{
		printf("the number %d is even", a);
	}
	else
	{
		printf("the number %d is odd", a);
	}
	return 0;
}
