#include <stdio.h>

int main()
{
	int grade[5], i, sum=0;
	double average;
	
	for(i=0;i<5;i++)
	{printf("%d��° �л��� ������ �Է�: ", i+1);
	scanf("%d", &grade[i]);	
	sum+=grade[i];
}

	average=sum/5;
	printf("���� ��� = %.2lf", average);
	
	return 0;
}
