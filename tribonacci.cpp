// write a c program tribonacci series //
# include<stdio.h>
int main()
{
	int a=0, b=0, c=1;
	int i=0, d, n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("\n Tribonacci series = ");
	while(i<=n)
	{
		printf("%d ", a);
		d = a+b+c;
		a = b;
		b = c;
		c = d;
		
		i++;
	}
	return 0;
}
