#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char ch = 'A';
    int num = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i + j <= n + 1) {
                printf("%c", ch++);
            } else {
                printf("%d", num++);
            }

            if (j < n) {
                printf(" ");
            }
        }
        printf("\n");
    }
}