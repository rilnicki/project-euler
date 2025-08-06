#include <stdbool.h>
#include <stdio.h>

bool is_palindrome(int number) {
    int n = number, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == number;
}

int main() {
    int max = 0;
    for (int x = 999; x > 100; x--) {
        for (int y = x; y > 100; y--) {
            int product = x * y;
            if (product < 10000) break;
            if (is_palindrome(product)) {
                max = (product > max) ? product : max;
            }
        }
    }
    printf("%d\n", max);
}
