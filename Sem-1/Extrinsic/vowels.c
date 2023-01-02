#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;
    printf("Enter a string: ");
    gets(string);
    for (i = 0; string[i] != '\0'; ++i) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            for (j = i; string[j] != '\0'; ++j) {
                string[j] = string[j + 1];
            }
            --i;
        }
    }
    printf("String after removing vowels: %s", string);
    return 0;
}
