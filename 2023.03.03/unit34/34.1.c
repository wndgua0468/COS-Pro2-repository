#include <stdio.h>

int main() {

    int numArr[3][4] = {
        { 12, 13, 14, 15 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    printf("%d\n", numArr[0][0]);
    printf("%d\n", numArr[1][2]);
    printf("%d\n", numArr[2][0]);
    printf("%d\n", numArr[2][3]);


    return 0;
}

