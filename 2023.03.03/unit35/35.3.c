#include <stdio.h>

int main()
{
    char* s1 = "Hello";

    printf("%c\n", s1[1]);   
    printf("%c\n", s1[4]);   
    printf("%c\n", s1[5]);    

    s1[0] = 'A';           

    printf("%c\n", s1[0]);

    return 0;
}
