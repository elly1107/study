#include<stdio.h>

int CheckPrime(int a);
int main()
{
	int n, result;  //n�� 2 �̻��� ���� 
	
	printf("2�̻��� ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	result=CheckPrime(n);
	
	if (result==1)
	printf("%d�� �Ҽ��Դϴ�.", n);
	
	else
	printf("%d�� �Ҽ��� �ƴմϴ�.", n);
	
	return 0;
}

int CheckPrime(int a)
{
	int i, count=0;
	for(i=1; i<=a; i++)
	{
		if(a%i==0)
		count++;
	}
	
	if(count==2)
	return 1;
	
	else
	return 0;
}
