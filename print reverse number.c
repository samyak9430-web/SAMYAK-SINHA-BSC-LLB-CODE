#include <stdio.h>
int reverseNumber(int num) {
    int reverse = 0;
    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return reverse;
}

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    int isNegative = (num < 0);
    if (isNegative) {
        num = -num;
    }
    int reversed = reverseNumber(num);
    if (isNegative) {
        reversed = -reversed;
    }
    printf("Reversed number: %d\n", reversed);

    return 0;
}
