#include <stdio.h>

int main()
{
	int i, sumK=0, sumE=0, sumM=0;
	int Chulsu, Minsu, Younghee;//�л��� 3������ 
	double meanK, meanE, meanM, maxMean; //���� ��� 
	
	int kor[3]={10, 20, 30};
	int eng[3]={15, 10, 5};
	int math[3]={22, 5, 6};
	
	printf("ö�� �μ� ������ ���������� �Է��ϼ���: %d %d %d\n", kor[0]);	 
	printf("ö�� �μ� ������ ���������� �Է��ϼ���: %d %d %d\n");
	printf("ö�� �μ� ������ ���������� �Է��ϼ���: %d %d %d\n");
	
		for(i=0;i<3;i++)
	sumK+=kor[i];
	sumE+=eng[i];
	sumM+=math[i];
	
	meanK=(double)sumK/3;
	meanE=(double)sumE/3;
	meanM=(double)sumM/3;
	
	maxMean=(meanK>meanE)?((meanK>meanM)?meanK:meanM):((meanE>meanM)?meanE:meanM);
	printf("����� ���� ���� ������ ��������� %f�Դϴ�.\n", maxMean);
	
	printf("ö���� ������ ���� �����ϴ�.");
	
}
