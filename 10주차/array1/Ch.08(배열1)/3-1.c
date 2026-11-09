#include <stdio.h>

int main() {
    int arr[100];
    int i = 0;

    while (1) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            break;
        }

        i++;
    }

    for (int j = 1; j < i; j += 2) {
        printf("%d ", arr[j]);
    }

    return 0;
}