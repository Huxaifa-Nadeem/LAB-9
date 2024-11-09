#include <stdio.h>

void findMaxMin(int numbers[], int count, int *maxValue, int *minValue) {
    *maxValue = numbers[0];
    *minValue = numbers[0];

    for (int i = 1; i < count; i++) {
        if (numbers[i] > *maxValue) {
            *maxValue = numbers[i];
        }
        if (numbers[i] < *minValue) {
            *minValue = numbers[i];
        }
    }
}

int main() {
    int elementCount;

    printf("Enter the number of elements: ");
    scanf("%d", &elementCount);

    int values[elementCount];

    printf("Enter %d elements:\n", elementCount);
    for (int i = 0; i < elementCount; i++) {
        scanf("%d", &values[i]);
    }

    int maxValue, minValue;
    findMaxMin(values, elementCount, &maxValue, &minValue);

    printf("Maximum value: %d\n", maxValue);
    printf("Minimum value: %d\n", minValue);

    return 0;
}
