#include <stdio.h>

int main(void)
{
	int input;
	int minute;
	int second;
	
	printf("�ʴ����� �ð��� �Է��Ͻÿ�(32���� ����): ");
	scanf("%d", &input);
	
	minute=input/60;
	second=input%60;
	
	printf("�Է��� %d�ʴ� %d�� %d���Դϴ�.", input, minute, second);
	return 0;
}
