#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* words[], int words_len, char* word)
{
    int count = 0;
    int word_len = strlen(word);

    for (int i = 0; i < words_len; i++)
    {
        int diff = 0;
        for (int j = 0; j < word_len; j++)
        {
            if (words[i][j] != word[j])
            {
                diff++;
            }
        }
        if (diff == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char* words[3] = { "CODE", "COED", "CDEO" };
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
