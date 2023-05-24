#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Student
{
	char name[20];
	int score;
}Student;

int compare(const void* a, const void* b)
{
	Student first = *(Student*)a;
	Student second = *(Student*)b;
	if (first.score > second.score)
		return -1;
	else if (first.score < second.score)
		return 1;
	else
		return 0;
}

char* solution(char* names[], int names_len, int scores[], int scores_len, int k)
{
	int len = names_len;
	Student* students = (Student*)malloc(sizeof(Student) * len);
	for(int i = 0; i < len; i++)
	{
		strcpy(students[i].name, names[i]);
		students[i].score = scores[i];
	}

	qsort(Students, len, sizeof(Student), compare);
	return students[k-1].name;
}

int main()
{
	char names[5] = { "lukas", "james", "levi", "eli", "max" };
	int names_len = 5;
	int scores[5] = { 30,20,50,40,10 };
	int scores_len = 5;
	int k = 2;
	char* ret = solution(names, names_len, scores, scores_len, k);

	printf("solution: return value of function is %s \n", ret);
}
