#include <stdio.h>

int main()
{
	int i;
	char str[4] ={'A', 'B', 'C', '\0'};
	char student[] = "John";
	char name[10];
	
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", name);
	printf("���� �̸��� %s\n", name);
	printf("%s\n", name);
		
	printf("���ڿ��� ���ÿ� ����ϴ� ���\n");
	printf("�л��� �̸��� %s�̴�.\n\n", student);
	printf("���ڿ���  �ѱ��ھ� ����ϴ� ���\n");
	
	for (i=0;str[i];i++)
		printf("%c\n",str[i]);
		
	
	return 0; 
}
