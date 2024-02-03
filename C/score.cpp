#include <stdio.h>

int main()
{
	int i, sumK=0, sumE=0, sumM=0;
	int Chulsu, Minsu, Younghee;//학생별 3과목의 
	double meanK, meanE, meanM, maxMean; //과목별 평균 
	
	int kor[3]={10, 20, 30};
	int eng[3]={15, 10, 5};
	int math[3]={22, 5, 6};
	
	printf("철수 민수 영희의 국어점수를 입력하세요: %d %d %d\n", kor[0]);	 
	printf("철수 민수 영희의 영어점수를 입력하세요: %d %d %d\n");
	printf("철수 민수 영희의 수학점수를 입력하세요: %d %d %d\n");
	
		for(i=0;i<3;i++)
	sumK+=kor[i];
	sumE+=eng[i];
	sumM+=math[i];
	
	meanK=(double)sumK/3;
	meanE=(double)sumE/3;
	meanM=(double)sumM/3;
	
	maxMean=(meanK>meanE)?((meanK>meanM)?meanK:meanM):((meanE>meanM)?meanE:meanM);
	printf("평균이 가장 높은 과목의 평균점수는 %f입니다.\n", maxMean);
	
	printf("철수의 점수가 가장 높습니다.");
	
}
