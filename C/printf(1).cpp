#include <stdio.h>

int main(void)
{
	char*pC= "C programming";
	printf("���ڿ��� ��ȯ��ȣ�� �̿��ؼ� ���\n");
	printf("%s\n", pC);
	printf("�ݺ����� �̿��� �� ���ھ� ���\n");
	while(*pC)
		printf("%c", *pC++);
	printf("\n");
	
	return 0; 
}
