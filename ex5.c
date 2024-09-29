#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, greatest, smallest;

    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

if (digit1 > digit2) {
    if (digit1 > digit3) {
        greatest = digit1;
    } else {
        greatest = digit3;
    }
} else {
    if (digit2 > digit3) {
        greatest = digit2;
    } else {
        greatest = digit3;
    }
}

if (digit1 < digit2) {
    if (digit1 < digit3) {
        smallest = digit1;
    } else {
        smallest = digit3;
    }
} else {
    if (digit2 < digit3) {
        smallest = digit2;
    } else {
        smallest = digit3;
    }
}

    printf("Greatest: %d\n", greatest);
    printf("Smallest: %d\n", smallest);

    return 0;
}