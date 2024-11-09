#include <stdio.h>

void swapIntegers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("\nBefore swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swapIntegers(&a, &b);

    printf("\nAfter swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
