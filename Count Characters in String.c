#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters in the string: %d\n", count - 1);
    return 0;
}
