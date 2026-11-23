#include <stdio.h>
#include <string.h>

typedef struct {
    char name[25];
    int height;
    double weight;
} Person;

int main(void) {
    Person list[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %lf", list[i].name, &list[i].height, &list[i].weight);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(list[i].name, list[j].name) > 0) {
                Person tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %g\n", list[i].name, list[i].height, list[i].weight);
    }

    return 0;
}