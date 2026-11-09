
#include <stdio.h>

int main() {
    int n, score[20], temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (score[i] < score[j]) {
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", score[i]);
    }

    return 0;
}
