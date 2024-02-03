#include <stdio.h>

int inverse(int a);

int main()
{
	int input;
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &input);
	inverse(input);
	return 0;
}

int inverse(int a)
{ 
	if(a<=1)
	printf("1");
	else
	{
	printf("%d  ", a);
	inverse(a-1);
	}
}
