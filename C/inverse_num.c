#include <stdio.h>

int inverse(int a);

int main()
{
	int input;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &input);
	inverse(input);
	return 0;
}

int inverse(int a)
{ 
	if(a<=1)
	printf("1");
	else
	{
	printf("%d  ", a);
	inverse(a-1);
	}
}
