#include <stdio.h>

int fib(int n);
int main(void)
{
	int num;
	
	printf("피보나치 수열을 구하기 위한 N을 입력: ");
	scanf("%d", &num);
	
	printf("%d번째 피보나치 수열의 값은 %d", num, fib(num)); 
	
	return 0;
}

int fib(int n)
{
	if(n<=2)
	return 1;
	
	else
	return fib(n-1)+fib(n-2);
}
