// write a program to find the net payable amount after applying a discount//
// if thr purchase amount is >= 10000, the customer gets a discount of 10% //
// otherwise they will get a discount of 5%//
# include<stdio.h>
int main()
{
	float pur_amt, discount, net_pay;
	printf("enter your purchase amount :");
	scanf("%f", &pur_amt);
	if(pur_amt >= 10000)
	{
		discount = pur_amt*0.10; // 10% of discount //
	}
	else
	{
		discount = pur_amt*0.05; // %5 of discount //
	}
	net_pay = pur_amt - discount;
	printf("\n discount = %2f\n", discount);
	printf("\n net payable amount = %2f\n", net_pay);
	return 0;
}
