#include <stdio.h>

int main()
{
	int month;
	int day;

	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &month);
	
	switch(month)
	{
	case 4 :
	case 6 :
	case 9 : 
	case 11 : 
		day=30;
		printf("%d���� �ϼ��� %d�Դϴ�.", month, day);
		break;
	
	case 2 : 
		day=28;
		printf("%d���� �ϼ��� %d�Դϴ�.", month, day);
		break;
	
	default : 
		day=31;
		printf("%d���� �ϼ��� %d�Դϴ�.", month, day);
	}
	
return 0;
}
