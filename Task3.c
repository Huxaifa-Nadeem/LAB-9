#include <stdio.h>

int checkPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int input;

    printf("Enter an integer to check if it's prime: ");
    scanf("%d", &input);

    if (checkPrime(input)) {
        printf("%d is a prime number.\n", input);
    } else {
        printf("%d is not a prime number.\n", input);
    }

    return 0;
}
