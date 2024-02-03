#include <stdio.h>

int main()
{
	int i;
	char str[4] ={'A', 'B', 'C', '\0'};
	char student[] = "John";
	char name[10];
	
	printf("이름을 입력하세요: ");
	scanf("%s", name);
	printf("나의 이름은 %s\n", name);
	printf("%s\n", name);
		
	printf("문자열을 동시에 출력하는 경우\n");
	printf("학생의 이름은 %s이다.\n\n", student);
	printf("문자열을  한글자씩 출력하는 경우\n");
	
	for (i=0;str[i];i++)
		printf("%c\n",str[i]);
		
	
	return 0; 
}
