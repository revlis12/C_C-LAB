#include <stdio.h>

int main() {
    int a = 100, b, c;

    scanf("%d", &b);

    printf("%d %d ", a, b);

    while (1) {
        c = a - b;

        if (c < 0) {
            break;
        }

        printf("%d ", c);

        a = b;
        b = c;
    }

    return 0;
}
