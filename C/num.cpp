#include <stdio.h>

int main()
{
	int num1;
	int num2;
	
	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &num1, &num2);
	
	printf("AND������: %d, OR������: %d,  XOR������: %d", num1&num2, num1|num2, num1^num2);
	return 0;
}
