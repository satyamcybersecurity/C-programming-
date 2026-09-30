// write a program to find the greatest among three numbers //
int main()
{
	int a, b, c;
	printf("enter first number :");
	scanf("%d", &a);
	printf("enter second number :");
	scanf("%d", &b);
	printf("enter third number :");
	scanf("%d", &c);
	if(a>=b && a>=c)
	{
		printf("\n the value a is greatest", a);
	}
	else if(b>=a && b>=c)
	{
		printf("\n the value b is greatest", b);
	}
	else
	{
		printf("\n the value c is greatest", c);
	}
	return 0;
}
