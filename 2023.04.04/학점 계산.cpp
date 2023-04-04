#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int scores[], int scores_len) {
    int* grade_counter = (int*)malloc(sizeof(int)*5);
    for(int i = 0; i < 5; ++i)
        grade_counter[i] = 0;

    for(int i = 0; i < scores_len; ++i)
    {
        if(scores[i] >= 85)
            grade_counter[0] += 1;
        else if(scores[i] >= 70)
            grade_counter[1] += 1;
        else if(scores[i] >= 55)
            grade_counter[2] += 1;
        else if(scores[i] >= 40)
            grade_counter[3] += 1;
        else
            grade_counter[4] += 1;
    }
    return grade_counter;
}

int main()
{
	int scores[] = {86,72,98,60,45};
	int scores_len = 5;
	
	int* grade_counter = solution(scores, scores_len);
    for(int i = 0; i < 5; ++i)
    {
        printf(" %d ", grade_counter[i]);
    }
    printf("\n");
    free(grade_counter);
    return 0;
	
}
