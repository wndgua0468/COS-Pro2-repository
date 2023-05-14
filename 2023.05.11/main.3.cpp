#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int taekwondo, int running, int shooting[], int shooting_len)
{
    int answer = 0;

    if (taekwondo >= 25)
        answer += 250;	//25경기 이상 승리하면 250점
    else
        answer += taekwondo * 8;	//그외에는 승리당 8점

    answer += 250 + (60 - running) * 5;	//60초보다 빠르면 1초당 5점을 더하고 아니면 5점을 뺌

    int count = 0;
    for (int i = 0; i < shooting_len; i++) 
    {
        answer += shooting[i];	//과녁에 적힌 숫자의 합
        if (shooting[i] == 10)	//10점인 점수 카운트
            count++;
    }
    if (count >= 7)
        answer += 100;	//7개 이상 10점이면 100점 추가점수

    return answer;
}

int main()
{
    int taekwondo = 27;
    int running = 63;
    int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
    int shooting_len = 10;
    int ret = solution(taekwondo, running, shooting, shooting_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
