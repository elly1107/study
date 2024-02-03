#include <stdio.h>

int main()
{
	int a;
	int year;
	
	printf("연도를 입력하세요.: ");
	scanf("%d", &a);
	
	
		if(a%4==0 && a%100!=0)

		{

			year = "윤년";

		}

		else if (a%400==0)

		{

			year = "윤년";

		}
		
	printf("%d년은 %s이다", a, year); 

}
