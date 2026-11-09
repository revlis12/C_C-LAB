#include <stdio.h>

int main() {
    int month;

    while (1) {
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            break;
        }

        switch (month) {
            case 2:
                printf("28\n");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("30\n");
                break;
            default:
                printf("31\n");
        }
    }

    return 0;
}