#include <stdio.h>

int main(void)
{
	int i = 10;
	int * ptr = &i;
	
	printf("ptr�� �ּ� ��: %p\n", &ptr);
	printf("i�� �ּ� ��: %p\n", &i);
	printf("i�� �ּ� ��: %p\n\n", ptr);
	
	printf("i�� ��: %d\n", i);
	printf("i�� ��: %d\n", *ptr);
	
	return 0;
}
