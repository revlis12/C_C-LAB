#include <stdio.h>

struct Student {
    char name[25];
    char school[25];
    int grade;
};

int main(void) {
    struct Student s;

    scanf("%s %s %d", s.name, s.school, &s.grade);

    printf("Name : %s\n", s.name);
    printf("School : %s\n", s.school);
    printf("Grade : %d\n", s.grade);

    return 0;
}