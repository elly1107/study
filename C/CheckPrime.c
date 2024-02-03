#include<stdio.h>

int CheckPrime(int a);
int main()
{
	int n, result;  //n은 2 이상의 정수 
	
	printf("2이상의 정수를 입력하시오: ");
	scanf("%d", &n);
	
	result=CheckPrime(n);
	
	if (result==1)
	printf("%d은 소수입니다.", n);
	
	else
	printf("%d은 소수가 아닙니다.", n);
	
	return 0;
}

int CheckPrime(int a)
{
	int i, count=0;
	for(i=1; i<=a; i++)
	{
		if(a%i==0)
		count++;
	}
	
	if(count==2)
	return 1;
	
	else
	return 0;
}
