#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int *pi, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(pi + j) > *(pi + j + 1)) {
                swap(pi + j, pi + j + 1);
            }
        }
    }
}

int main() {
    int num[5];
    int *pt = num;
    int size = 5;

    printf("Enter 5 integers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", pt + i);
    }

    bubblesort(pt, size);

    printf("Sorted: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(pt + i));
    }
    printf("\n");

    return 0;
}
