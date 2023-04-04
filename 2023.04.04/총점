#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] > ret)
            ret = s[i];
    return ret;
}

int func_b(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        ret += s[i];
    return ret;
}

int func_c(int s[], int arr_size) {
    int ret = 101;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] < ret)
            ret = s[i];
    return ret;
}
//scores_m은 배열 scores의 길이입니다.
int solution(int scores[], size_t scores_m) {
    int sum = func_b (scores, scores_m);
       
    int max_score = func_a (scores, scores_m );
    int min_score = func_c (scores, scores_m);
    return sum - max_score - min_score;
}
int main() {
    int scores[] = { 50, 35, 78,91, 85 };
    size_t scores_m = sizeof(scores) / sizeof(scores[0]);
    int answer = solution(scores, scores_m);
    printf("%d", answer);
    return 0;
}
