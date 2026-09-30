// write a c program to print pdd numbers by taking input from user //
# include<stdio.h>
int main()
{
	int i=1;
	int n;
	printf("enter your number :");
	scanf("%d", &n);
	while(i<=n)
	{
		if(i%2 != 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
