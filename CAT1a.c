/*
CAT1(a)
Write a C program that accepts a string as input,print the length of the string and display the word fequency, then use pointers to find the first repeated and non-repeated character in the string, and print the output:

POSSIBLE TEST CASES:

INPUT:

SUJITHRA

OUTPUT:

Length of the string is: 8
Word frequency is: 8
No repeated characters found in the string.
First non-repeated character is: S

#2 INPUT:

ASSDFG

OUTPUT:

Length of the string is: 6
Word frequency is: 5
First repeated character is: S
First non-repeated character is: A

 

#3 INPUT:

RUDRESH

OUTPUT:

Length of the string is: 7
Word frequency is: 6
First repeated character is: R
First non-repeated character is: U
*/
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void findChar(char *str, char *first_repeated, char *first_non_repeated) {
    int i, len, flag;
    int count[256] = {0};
    len = strlen(str);

    for (i = 0; i < len; i++) {
        count[str[i]]++;
    }

    for (i = 0; i < len; i++) {
        if (count[str[i]] == 1) {
            *first_non_repeated = str[i];
            break;
        }
    }

    for (i = 0; i < len; i++) {
        if (count[str[i]] > 1) {
            *first_repeated = str[i];
            break;
        }
    }
}

int main() {
    char str[MAX_SIZE];
    int i, len, wordCount = 0;
    char first_repeated = '\0', first_non_repeated = '\0';
    char *ptr = NULL;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    // remove the newline character from the end of the string if present
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    // count the number of unique characters in the string as word frequency
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            ptr = strchr(str + i + 1, str[i]);
            if (ptr == NULL) {
                wordCount++;
            }
        }
    }

    printf("Length of the string is: %d\n", len);
    printf("Word frequency is: %d\n", wordCount);

    // find first repeated and non-repeated characters using pointers
    findChar(str, &first_repeated, &first_non_repeated);

    if (first_repeated) {
        printf("First repeated character is: %c\n", first_repeated);
    } else {
        printf("No repeated characters found in the string.\n");
    }

    if (first_non_repeated) {
        printf("First non-repeated character is: %c\n", first_non_repeated);
    }

    return 0;
}
