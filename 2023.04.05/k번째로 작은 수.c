#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int solution(int** arr, int arr_row_len, int arr_col_len, int k) {
    int answer = 0;
    int* arr1d = (int*)malloc(arr_row_len * arr_col_len * sizeof(int));
    for (int i = 0; i < arr_row_len; i++) {
        for (int j = 0; j < arr_col_len; j++) {
            arr1d[i * arr_col_len + j] = arr[i][j];
        }
    }
    qsort(arr1d, arr_row_len * arr_col_len, sizeof(int), cmp);
    answer = arr1d[k - 1];
    free(arr1d);
    return answer;
}

int main()
{
    int arr_row_len = 3;
    int arr_col_len = 4;
    int k = 6;
    int** arr = (int**)malloc(arr_row_len * sizeof(int*));
    for (int i = 0; i < arr_row_len; i++) {
        arr[i] = (int*)malloc(arr_col_len * sizeof(int));
        for (int j = 0; j < arr_col_len; j++) {
            arr[i][j] = i * arr_col_len + j;
        }
    }

    int answer = solution(arr, arr_row_len, arr_col_len, k);
    printf("2차원 배열에서 %d번째로 작은 수는 %d입니다.\n", k, answer);

    for (int i = 0; i < arr_row_len; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
