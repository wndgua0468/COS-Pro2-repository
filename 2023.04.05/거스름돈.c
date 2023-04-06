#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) {
    int total = 0;
    for (int i = 0; i < price_len; i++) {
        total += price[i];
    }
    if (total > money)
    {
        return -1;
    }
    int change = money - total;
    return change;
}

int main()
{
    int price[] = {2100, 3200 , 2100, 800};
    int price_len = 4;
    int money = 10000; 

    int answer = solution(price, price_len, money);
    printf("고객에게 받은돈 %d 돌려줘야 하는돈 %d\n", money, answer);
}
