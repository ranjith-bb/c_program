#include <stdio.h>

int isHarshadNumber(int num) {
    int sum = 0;
    int temp = num;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    return (num % sum == 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isHarshadNumber(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    return 0;
}
