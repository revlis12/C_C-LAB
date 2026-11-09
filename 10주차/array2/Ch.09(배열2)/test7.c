
#include <stdio.h>

int main() {
    int a[4][2];
    int sum;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 가로 평균
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 2; j++) {
            sum += a[i][j];
        }
        printf("%d ", sum / 2);
    }
    printf("\n");

    // 세로 평균
    for (int j = 0; j < 2; j++) {
        sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += a[i][j];
        }
        printf("%d ", sum / 4);
    }
    printf("\n");

    // 전체 평균
    sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            sum += a[i][j];
        }
    }
    printf("%d\n", sum / 8);

    return 0;
}
