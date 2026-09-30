// farhenheit to celcius //
# include<stdio.h>
int main()
{
	float f, c;
	printf("enter the value of farhenheit :");
	scanf("%f", &f);
	c = (f - 32) * 5/9;
	printf("the value in celcius will be : %2f\n", c);
	return 0;
}
