#include <stdio.h>

int main(void)
{
	int input;
	int minute;
	int second;
	
	printf("초단위의 시간을 입력하시오(32억초 이하): ");
	scanf("%d", &input);
	
	minute=input/60;
	second=input%60;
	
	printf("입력한 %d초는 %d분 %d초입니다.", input, minute, second);
	return 0;
}
