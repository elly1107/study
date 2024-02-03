#include <stdio.h>
int main()
{
	int a;
	
	printf("양의 정수를 입력하세요: "); 
	scanf("%d", &a);
	
	if(a%3==0)
	{
		if(a%6==0) 
		printf("입력한 %d은(는) 3의 배수이면서, 6의 배수입니다.", a);
		
		else
		printf("입력한 %d은(는) 3의 배수이지만, 6의 배수는 아닙니다.", a);
	}
	
	else
	printf("입력한 %d은(는) 3의배수도, 6의 배수도 아닙니다.", a);
	
	return 0;
}
