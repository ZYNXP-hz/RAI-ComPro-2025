#include <stdio.h>

int main() {
    float x, y, temp;
    float *px, *py;

    printf("Enter value of x: ");
    scanf("%f", &x);
    printf("Enter value of y: ");
    scanf("%f", &y);

    px = &x;
    py = &y;
    printf("Before swapping:\n");
    printf("x = %.2f\n",x);
    printf("y = %.2f\n",y);
    temp = *px;
    *px = *py;
    *py = temp;

    printf("\nAfter swapping:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}