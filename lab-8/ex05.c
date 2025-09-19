#include <stdio.h>

void EvenOdd(int arr[], int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            *even += arr[i];
        else
            *odd += arr[i];
    }
}

int main() {
    int n;

    printf("N: ");
    scanf("%d", &n);

    int arr[n]; 
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int even, odd;
    EvenOdd(arr, n, &even, &odd);

    printf("Sum of even number: %d\n", even);
    printf("Sum of odd number: %d\n", odd);

    return 0;
}
