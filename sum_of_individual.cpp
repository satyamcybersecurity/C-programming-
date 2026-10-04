# include<stdio.h>
int main()
{
	int n, sum, digit;
	printf("Enter a number : ");
	scanf("%d", &n);
	while(n>=10)
	{
		sum = 0;
		while(n>0)
		{
			digit = n%10;
			sum += digit;
			n =n/10;
		}
		n = sum;
	}
	printf("Single digit result = %d", n);
	return 0;
}
