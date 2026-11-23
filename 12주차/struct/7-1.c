#include <stdio.h>

typedef struct {
    char name[101];
    char tel[101];
    char addr[101];
} Info;

int main(void) {
    Info person;

    scanf("%100s %100s %100s", person.name, person.tel, person.addr);

    printf("name : %s\n", person.name);
    printf("tel : %s\n", person.tel);
    printf("addr : %s\n", person.addr);

    return 0;
}