#include <stdio.h>

int main()
{
	int a;
	int bit_mask=8;
	
	printf("���� ���� �Ѱ��� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	
	printf("�Է��� �� %d�� �׹�° ��Ʈ�� %d", a, a&bit_mask);	
}
