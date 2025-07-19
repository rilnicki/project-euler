#include <stdio.h>

int main() {
    long long number = 600851475143, max = 2;
    while (number > 1) {
        for (long long factor = 2; factor <= number; factor++) {
            if (number % factor == 0) {
                max = (max > factor) ? max : factor;
                number /= factor;
                break;
            }
        }
    }
    printf("%lld\n", max);
}
