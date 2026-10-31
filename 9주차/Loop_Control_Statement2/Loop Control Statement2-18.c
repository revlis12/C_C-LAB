#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
