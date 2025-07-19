#include <stdio.h>

int main() {
    int sum = 0, n1 = 1, n2 = 1, tmp;
    while (n2 <= 4000000) {
        if (n2 % 2 == 0) {
            sum += n2;
        }
        tmp = n1;
        n1 = n2;
        n2 += tmp;
    }
    printf("%d\n", sum);
}
