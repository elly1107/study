#include <stdio.h>

int main()
{
	int month;
	int day;

	printf("일수를 알고 싶은 달을 입력하시오: ");
	scanf("%d", &month);
	
	switch(month)
	{
	case 4 :
	case 6 :
	case 9 : 
	case 11 : 
		day=30;
		printf("%d월의 일수는 %d입니다.", month, day);
		break;
	
	case 2 : 
		day=28;
		printf("%d월의 일수는 %d입니다.", month, day);
		break;
	
	default : 
		day=31;
		printf("%d월의 일수는 %d입니다.", month, day);
	}
	
return 0;
}
