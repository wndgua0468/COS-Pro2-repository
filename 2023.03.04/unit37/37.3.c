#include <stdio.h>
#include <string.h>  

int main()
{
    char* s1 = "C Language";

    printf("%d\n", strlen(s1));

    return 0;

}
------------------------------

int main_2()
{
    char* s1 = "Pachelbel Canon";
    char* s2 = "Pachelbel Canon";

    int ret = strcmp(s1, s2);

    printf("%d", ret);

    return 0;
}
