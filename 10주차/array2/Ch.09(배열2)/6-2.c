#include <stdio.h>

int main(void) {
    int scores[5][4];
    int total[5] = {0};
    float avg[5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
        avg[i] = (float)total[i] / 4.0;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d %.1f\n", total[i], avg[i]);
    }

    return 0;
}