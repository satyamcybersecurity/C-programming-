// write a c program to count the digits of a whole number //
# include<stdio.h>
int main()
{
	int n, count = 0;
	printf("Enter your number : ");
	scanf("%d", &n);
	while(n>0)
	{
		count++;
		n = n/10;
	}
	printf("\n total count of digits : %d", count);
	return 0;
}
