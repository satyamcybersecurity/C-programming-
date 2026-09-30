# include<stdio.h>
int main()
{
	int units;
	float bills;
	printf("enter units consumed :");
	scanf("%d", &units);
	if(units <= 100)
	{
		bills = 100 * 2;
	}
	else if(units <= 200)
	{
		bills = (100*2) + ((units - 100) * 3);
	}
	else if(units <= 300)
	{
		bills = (100*2) + (100*3) + ((units - 200) * 5);
	}
	else
	{
		bills = (100*2) + (100*3) + (100*5) + ((units - 300) * 7);
	}
	printf("\n your electricity bill = rs %2f", bills);
	return 0;
}
