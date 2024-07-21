#include <stdio.h>

int isMagicNumber(int num) {
    int sum = 0;

    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }

    return (sum == 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isMagicNumber(num)) {
        printf("%d is a magic number.\n", num);
    } else {
        printf("%d is not a magic number.\n", num);
    }

    return 0;
}
