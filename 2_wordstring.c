#include <stdio.h>
#include <string.h>
#include <ctype.h>

int reviseString(char *str);

int main() {
    char str[100];
    printf("Enter a sentence with two words: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character from input
    
    int len = reviseString(str);
    printf("\nLength of the string: %d", len);
    if (len < 20) {
        return len;
    } else {
        return sizeof(str);
    }
}

int reviseString(char *str) {
    int len = strlen(str);
    int spaceIndex = -1;
    for (int i = 0; i < len; i++) {
        if (isspace(str[i])) {
            spaceIndex = i;
            break;
        }
    }
    if (spaceIndex == -1) {
        printf("Invalid input\n");
        return -1;
    }

    // For the first word
    for (int i = 0; i < spaceIndex; i++) {
        if (i == 0) {
            putchar(toupper(str[i]));
        } else {
            putchar(tolower(str[i]));
        }
    }
    putchar(' ');

    // For the second word
    for (int i = spaceIndex + 1; i < len; i++) {
        putchar(toupper(str[i]));
    }

    printf("\nLength of the string: %d\n", len);
    return len;
}
