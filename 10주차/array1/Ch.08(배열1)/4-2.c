#include <stdio.h>

int main() {
    double arr[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%.1f", arr[a-1] + arr[b-1]);

    return 0;
}