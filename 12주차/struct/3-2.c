#include <stdio.h>

struct Person {
    char name[100];
    int height;
};

int main(void) {
    struct Person people[3];

    for (int i = 0; i < 3; i++) {
        scanf("%s %d", people[i].name, &people[i].height);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s : %dcm\n", people[i].name, people[i].height);
    }

    return 0;
}