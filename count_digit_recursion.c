#include <stdio.h>

// Recursive function to count a digit
int countDigit(int num, int digit) {
    if (num == 0) {
        return 0;
    }

    int count = (num % 10 == digit) ? 1 : 0;

    return count + countDigit(num / 10, digit);
}

int main() {
    int num, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    if (num == 0) {
        count = (digit == 0) ? 1 : 0;
    } else {
        count = countDigit(num, digit);
    }

    printf("Digit %d occurs %d times.\n", digit, count);

    return 0;
}