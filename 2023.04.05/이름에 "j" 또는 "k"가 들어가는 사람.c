#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* name_list[], int name_list_len) {
    int answer = 0;
    for (int i = 0; i < name_list_len; ++i)
        for (int j = 0; name_list[i][j] != 0; ++j)
            if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
                answer++;
                break;
            }
    return answer;
}

int main()
{
    char* name_list[] = { "james", "luke", "oliver", "jack" };
    int name_list_len = sizeof(name_list) / sizeof(name_list[0]);

    int answer = solution(name_list, name_list_len);
    printf("%d\n", answer);

    return 0;
}
