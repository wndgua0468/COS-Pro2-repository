#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char s1[10];


	printf("문자열을 입력하시오: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	return 0;
}

---------------------------------------------

int main_2() 
{

	char* s1 = malloc(sizeof(char) * 10);

	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("%s\n", s1);

	free(s1);

	return 0;
}
----------------------------------------------
int main_3()
{
	char* s1 = malloc(sizeof(char) * 10);
	char* s2 = malloc(sizeof(char) * 10);
	char* s3 = malloc(sizeof(char) * 10);

	printf("문자열을 세 개 입력하세요: ");
	scanf("%s %s %s", s1, s2, s3);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);

	free(s1);
	free(s2);
	free(s3);

	return 0;
}
