#include <stdio.h>

// 매개변수 int arr[]는 실제로 int *arr(포인터)와 동일하게 동작함
void test(int arr[], int *ptr){
    printf("\n[함수내부]\n");

    printf("arr[0] = %d\n", arr[0]);
    printf("ptr[0] = %d\n", ptr[0]);

    arr++; // 가능 : 함수 매개변수 arr은 포인터
    ptr++; // 가능 : 포인터 변수

    printf("arr++ 이후 : %d\n", arr[0]);
    printf("ptr++ 이후 : %d\n", ptr[0]);
}

int main(){
    int a[3] = { 10, 20, 30}; // 연속된 int 3개 공간 할당
    int *p = a; // p가 a[0]의 주소를 저장

    printf("[main 함수]\n");

    printf("a[0] = %d\n", a[0]);
    printf("p[0] = %d\n", p[0]);

    p++; //  가능 : p가 a[1]을 가리키도록 이동
    // a++;  오류 : 배열 이름은 주소 상수이므로 증감 불가(컴파일 에러)

    printf("p++ 이후 : %d\n", p[0]); // 20
    printf("a[0] = %d\n", a[0]); // a[0]은 그대로 10

    p = a; // p를 다시 배열 시작 주소(a[0])로 복구

    test(a, p); // a의 시작 주소와 p의 주소 값을 복사해 전달

    printf("\n[함수 호출 이후]\n");
    printf("a[0] = %d\n", a[0]); // 함수 내 arr++는 main에 영향 없음 -> 10
    printf("p[0] = %d\n", p[0]); // 함수 내 ptr++는 main에 영향 없음 -> 10

    return 0;
}