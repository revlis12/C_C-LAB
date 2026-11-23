#include <stdio.h>
#include <string.h>

typedef struct {
    char name[101];
    char tel[101];
    char addr[101];
} Info;

int main(void) {
    Info list[3];

    for (int i = 0; i < 3; i++) {
        scanf("%100s %100s %100s", list[i].name, list[i].tel, list[i].addr);
    }

    int min_idx = 0;
    for (int i = 1; i < 3; i++) {
        if (strcmp(list[i].name, list[min_idx].name) < 0) {
            min_idx = i;
        }
    }

    printf("name : %s\n", list[min_idx].name);
    printf("tel : %s\n", list[min_idx].tel);
    printf("addr : %s\n", list[min_idx].addr);

    return 0;
}