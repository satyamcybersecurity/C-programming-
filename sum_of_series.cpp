// 2+5+8+11+14 upto n terms. w.c.p to calculate sum of given series //
# include<stdio.h>
int main()
{
	int n;
	int i=1;
	int sum=0;
	int term=2;
	printf("\n enter the value of n :");
	scanf("%d", &n);
	while(i<=n)
	{
		sum += term;
		term += 3;
		i++;
	}
	printf("\n the sum will be : %d", sum);
	return 0;
}
