#include <stdio.h>

int main()
{
	int i;
	char str[30] = "C language is easy";
	
	while(str[i])
	i++;
	
	printf("문자열 \"C language is easy\"의 길이는 %d입니다.", i);	
	
	return 0;
}
