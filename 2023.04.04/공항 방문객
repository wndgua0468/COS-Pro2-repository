#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* func_a(int arr[], int arr_size, int n)
{
    int* ret = (int*)malloc(sizeof(int)*(arr_size - 1));
    int idx = 0;
    for(int i = 0; i < arr_size; ++i)
        if(arr[i] != n)
            ret[idx++] = arr[i];
    return ret;
}

int func_b(int a, int b)
{
    if(a >= b)
        return a - b;
    else
        return b - a;
}

int func_c(int arr[], int arr_size)
{
    int ret = -1;
    for(int i = 0; i < arr_size; ++i)
        if(ret<arr[i])
            ret = arr[i];
    return ret;
}
//visitor_m은 배열 visitor의 길이입니다.
int solution(int visitor[], size_t visitor_m) 
{
    int max_first = func_c(visitor, visitor_m);
    int* visitor_removed = func_a(visitor, visitor_m, max_first);
    int max_second = func_c(visitor_removed, visitor_m-1);
    int answer = func_b(max_first, max_second);
    return answer;
}

int main()
{
	int  visitor[5] = {4,7,2,9,3};
	int  sum = solution(visitor, 5);
	
	printf("가장 많은 방문객 수와 두 번째로 많은 방문객 수의 차이 %d 입니다\n", sum);
	
	return 0;

}
