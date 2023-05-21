#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int korean, int english)
{
	int answer = 0;

	int math = 210 - (korean + english);
	if (math > 100)
		answer - 1;
	else
		math = answer;

	return answer;
}
int main()
{
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);

	printf("solution 함수의 반환 값은  %d입니다.", ret);
}
