
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d", &a, &b);

    printf("%d %d ", a, b);

    for (int i = 3; i <= 10; i++) {
        c = (a + b) % 10;
        printf("%d ", c);

        a = b;
        b = c;
    }

    return 0;
}
