#include <stdio.h>
int main()
{
	int a;
	
	printf("���� ������ �Է��ϼ���: "); 
	scanf("%d", &a);
	
	if(a%3==0)
	{
		if(a%6==0) 
		printf("�Է��� %d��(��) 3�� ����̸鼭, 6�� ����Դϴ�.", a);
		
		else
		printf("�Է��� %d��(��) 3�� ���������, 6�� ����� �ƴմϴ�.", a);
	}
	
	else
	printf("�Է��� %d��(��) 3�ǹ����, 6�� ����� �ƴմϴ�.", a);
	
	return 0;
}
