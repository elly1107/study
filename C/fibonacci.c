#include <stdio.h>

int fib(int n);
int main(void)
{
	int num;
	
	printf("�Ǻ���ġ ������ ���ϱ� ���� N�� �Է�: ");
	scanf("%d", &num);
	
	printf("%d��° �Ǻ���ġ ������ ���� %d", num, fib(num)); 
	
	return 0;
}

int fib(int n)
{
	if(n<=2)
	return 1;
	
	else
	return fib(n-1)+fib(n-2);
}
