
#include <stdio.h>

int main() {
    int score;
    int sum;
    int total = 0;

    for (int i = 1; i <= 4; i++) {
        sum = 0;

        for (int j = 1; j <= 3; j++) {
            scanf("%d", &score);
            sum += score;
        }

        printf("%d반 합계 : %d\n", i, sum);
        total += sum;
    }

    printf("전체 합계 : %d\n", total);

    return 0;
}
