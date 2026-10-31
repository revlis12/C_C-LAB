#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    int sum = 0, count = 0;
    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / count);
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
    return 0;
}