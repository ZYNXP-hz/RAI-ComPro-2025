#include <stdio.h>

int main() {
    int A[3][3];
    int i, j, num = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            A[i][j] = num++;
        }
    }

    printf("Array :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(*(A+i)+j)); 
        }
        printf("\n");
    }

    return 0;
}