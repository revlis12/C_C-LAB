#include <stdio.h>

int main() {
    char n;
    int count;

    while (1) {
        scanf("%c ", &n);

        if (n < 1 || n > 10)
            break;

        count[n]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}