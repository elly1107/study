#include <stdio.h>

int main()
{
	int a;
	int year;
	
	printf("������ �Է��ϼ���.: ");
	scanf("%d", &a);
	
	
		if(a%4==0 && a%100!=0)

		{

			year = "����";

		}

		else if (a%400==0)

		{

			year = "����";

		}
		
	printf("%d���� %s�̴�", a, year); 

}
