#include <stdio.h>

int square(int c);
int sum_square(int x, int y);
int main(void)
{
	int a, b;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &a, &b); 
	printf("�� ������ ������ ��: %d", sum_square(a, b));
	return 0;
}

		int square(int c)
		{
		return c*c;
		}
	
	int sum_square(int x, int y)
	{
		return square(x)+square(y);
	}
