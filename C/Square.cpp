#include <stdio.h>
int square(int a);
int main(void)
{
	int i;
	for(i=0;i<=5;i++)
	printf("%d�� ������: %d\n", i, square (i));
	
	return 0;
}

int square(int i)
{
	int result;
	result=i*i;
	return result;
}
