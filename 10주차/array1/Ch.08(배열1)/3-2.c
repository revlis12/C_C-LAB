#include <stdio.h>

int main() {
    int arr[100];
    int num;
    int count = 0;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        arr[count] = num;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}