#include <stdio.h>

int main(void) {
    int scores[3][4] = {0};
    int subject_sums[3] = {0};
    int total_sum = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
        
        scores[i][3] = scores[i][0] + scores[i][1] + scores[i][2];
        
        subject_sums[0] += scores[i][0];
        subject_sums[1] += scores[i][1];
        subject_sums[2] += scores[i][2];
        
        total_sum += scores[i][3];
    }

    for (int i = 0; i < 3; i++) {
        printf("%d %d %d %d\n", scores[i][0], scores[i][1], scores[i][2], scores[i][3]);
    }

    printf("%d %d %d %d\n", subject_sums[0], subject_sums[1], subject_sums[2], total_sum);

    return 0;
}