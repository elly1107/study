#include <stdio.h>

int	SelectSum(int Array[], int Size);
int main(void)
{
	int a[]={10, 5, 15, 25, 7};
	int Sum;
	Sum = SelectSum(a,5);
	printf("배열 원소의 합: %d\n", Sum);
	return 0;
}

int SelectSum(int Array[], int Size)
{
	int i, result=0;
	for(i=0; i<Size; i++)
	{
		if(Array[i]>10)
		{
			result+=Array[i];
		}
	}
	return result;
}
