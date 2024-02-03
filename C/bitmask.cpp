#include <stdio.h>

int main()
{
	int a;
	int bit_mask=8;
	
	printf("양의 정수 한개를 입력하시오: ");
	scanf("%d", &a);
	
	printf("입력한 값 %d의 네번째 비트는 %d", a, a&bit_mask);	
}
