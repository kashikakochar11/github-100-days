/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */
#include <stdio.h>

int block[] = {1, 3, 5, 3, 1};

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < block[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}