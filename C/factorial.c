#include <stdio.h>

int factorial(int n);
static int count=1;
int main(void)
{
	int fact_num;
	fact_num = factorial(10);
	
	printf("factorial()�� %d�� ȣ���\n", count);
	
	printf("10���丮�� : %d\n", fact_num);
	
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
