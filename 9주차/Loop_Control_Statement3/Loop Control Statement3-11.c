#include <stdio.h>

int main() {
    char ch = 'a';
    int num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j <= i) {
                printf("%c ", ch);
                ch++;
            } else {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }
}