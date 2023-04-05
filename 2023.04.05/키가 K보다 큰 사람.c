#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void solution(int height[], int height_len, int k) {
    printf("%d보다 큰 키는 ", k);

    for (int i = 0; i < height_len; ++i) {
        if (height[i] > k) {
            printf("%d ", height[i]);
        }
    }
    printf("입니다");
}

int main() {
    int height[] = { 165, 170, 175, 180, 184 };
    int height_len = 5;
    int k = 175;

    solution(height, height_len, k);

    return 0;
}
