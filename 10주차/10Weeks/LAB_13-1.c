#include <stdio.h>
#include <string.h>

// 학생 구조체 정의
struct Student {
    char name[50];
    int id;
    float gradePoints;
};

int main(){
    struct Student Student1, Student2;
    
    // 학생 1 데이터 입력
    strcpy(Student1.name, "Moon");
    Student1.id = 20240001;
    Student1.gradePoints = 95.5;

    // 학생 2 데이터 입력
    strcpy(Student2.name, "Yun");
    Student2.id = 20240002;
    Student2.gradePoints = 88.5;

    // 학생 1 정보 출력
    printf("학생 1의 정보 :\n");
    printf("이름 : %s\nID : %d\n점수 : %.2f\n\n", Student1.name, Student1.id, Student1.gradePoints);

    // 학생 2 정보 출력
    printf("학생 2의 정보 :\n");
    printf("이름 : %s\nID : %d\n점수 : %.2f\n\n", Student2.name, Student2.id, Student2.gradePoints);

    return 0;
}