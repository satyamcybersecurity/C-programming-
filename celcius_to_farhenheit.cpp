// write a c program to convert celcius into farhenheit//
# include<stdio.h>
int main()
{
	int c, f;
	printf("enter the value of celcius :");
	scanf("%d", &c);
	f = (c * 9/5) + 32;
	printf("\n the value in farhenheit will be : %d");
	return 0;
}
