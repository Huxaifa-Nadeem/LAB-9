#include <stdio.h>
#include <string.h>

void sortStringsByFirstCharacter(char strings[][100], int stringCount) {
    char temp[100];
    
    for (int i = 0; i < stringCount - 1; i++) {
        for (int j = i + 1; j < stringCount; j++) {
            if (strings[i][0] > strings[j][0]) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
}

int main() {
    int totalStrings;

    printf("Enter the number of strings: ");
    scanf("%d", &totalStrings);

    char strings[totalStrings][100];
    
    printf("Enter %d strings:\n", totalStrings);
    for (int i = 0; i < totalStrings; i++) {
        scanf("%s", strings[i]);
    }

    sortStringsByFirstCharacter(strings, totalStrings);

    printf("Sorted strings:\n");
    for (int i = 0; i < totalStrings; i++) {
        printf("%s ", strings[i]);
    }
    printf("\n");

    return 0;
}
