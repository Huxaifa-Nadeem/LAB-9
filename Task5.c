#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char userInput[100];

    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);
    userInput[strcspn(userInput, "\n")] = 0;

    reverse(userInput);

    printf("Reversed string: %s\n", userInput);

    return 0;
}
