#include <stdio.h>

int main()
{
	int num1;
	int num2;
	
	printf("두 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	
	printf("AND연산결과: %d, OR연산결과: %d,  XOR연산결과: %d", num1&num2, num1|num2, num1^num2);
	return 0;
}
