#include <stdio.h>

struct SchoolInfo {
    char school[100];
    int grade;
};

int main(void) {
    struct SchoolInfo s1 = {"Jejuelementary", 6};
    struct SchoolInfo s2;

    scanf("%s %d", s2.school, &s2.grade);

    printf("%d grade in %s School\n", s1.grade, s1.school);
    printf("%d grade in %s School\n", s2.grade, s2.school);

    return 0;
}