#include <stdio.h>

int main()
{
	int grade[5], i, sum=0;
	double average;
	
	for(i=0;i<5;i++)
	{printf("%d번째 학생의 성적을 입력: ", i+1);
	scanf("%d", &grade[i]);	
	sum+=grade[i];
}

	average=sum/5;
	printf("성적 평균 = %.2lf", average);
	
	return 0;
}
