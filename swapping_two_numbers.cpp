# include<stdio.h>
int main()
{
	int a, b, swap;
	printf("enter first number :");
	scanf("%d", &a);
	printf("enter second number :");
	scanf("%d", &b);
	swap = a;
	a = b;
	b = swap;
	printf("\n the value of a after swapping : %d", a);
	printf("\n the valur of b after swapping : %d", b);
	return 0;
}
