#include <stdio.h>

int main() {
    int num;
    char ani[10];

    scanf("%d", &num);

    switch (num) {
        case 1: 
            sprintf(ani, "dog");
            break;
        case 2: 
            sprintf(ani, "cat");
            break;
        case 3: 
            sprintf(ani, "chick");
            break;
        default: 
            sprintf(ani, "blank");
    }

    printf("%s", ani);

    return 0;
}
