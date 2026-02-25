#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Read the entire line (sentence)
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            printf("\n");
        } else if (str[i] != '\n') {
            printf("%c", str[i]);
        }
        i++;
    }

    return 0;
}