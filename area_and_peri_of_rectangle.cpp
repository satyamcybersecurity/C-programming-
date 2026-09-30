# include<stdio.h>
int main()
{
	int a, b, area, peri;
	printf("enter length of rectangle :");
	scanf("%d", &a);
	printf("enter breadth of rectangle :");
	scanf("%d", &b);
	area = a * b;
	peri = 2*a + 2*b;
	printf("area will be : %d", area);
	printf("perimeter will be : %d", peri);
	return 0;
}
