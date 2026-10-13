// 학생 성적 정렬하기

# include <stdio.h>

#define MAX_STUDENT 50

void bubbleSort(int*arr, int size);

void bubbleSort(int*arr, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {

    int numstudents;
    printf("학생수 입력(최대 50명): ", MAX_STUDENT);
    scanf("%d",numstudents);



    if (numstudents > MAX_STUDENT) {
        printf("입력 가능한 학생 수를 초과했습니다. \n");
        return 1;
    }

    int* gradesPointer;        // int형 포인터 변수 선언
    int grades[MAX_STUDENT];   // int형 배열 grades 선언
    gradesPointer = grades;

    for (int i = 0; i < numstudents; i++) {
        printf("%d번 학생의 최종 성적을 입력하세요. : ", i + 1);
        scanf("%d", gradesPointer + i);
    }

    bubbleSort(gradesPointer, numstudents);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i < numstudents; i++) {
        printf("%d ", *(gradesPointer + i));
    }
    printf("\n\n최고 성적 : %d\n", *(gradesPointer + numstudents - 1));
    printf("최하 성적 : %d\n", *gradesPointer);

    return 0;
}