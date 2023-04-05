#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(char* s) {
    char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(s_ret, s);

    for (int i = 0; s_ret[i] != 0; ++i) {
        if (s_ret[i] == 'a')
            s_ret[i] = 'z';
        else if (s_ret[i] == 'z')
            s_ret[i] = 'a';
    }
    return s_ret;
}

int main() {
    char s[] = "abz";
    char* s_ret = solution(s);
    printf("%s\n", s_ret);
    free(s_ret); // 동적 할당한 메모리 해제
    return 0;
}                       
