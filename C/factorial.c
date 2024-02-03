#include <stdio.h>

int factorial(int n);
static int count=1;
int main(void)
{
	int fact_num;
	fact_num = factorial(10);
	
	printf("factorial()°¡ %d¹ø È£ÃâµÊ\n", count);
	
	printf("10ÆÑÅä¸®¾ó : %d\n", fact_num);
	
	return 0; 
}

int factorial(int n)
{
	if (n<=1)
	return (1);
	else
	{
	count++;
	return (n*factorial(n-1));
	}
}
