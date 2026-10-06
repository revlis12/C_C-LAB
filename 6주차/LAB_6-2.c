#include <stdio.h> 

// 삽입 정렬(Insertion Sort) 함수 정의
// arr[]: 정렬할 정수 배열, n: 배열의 크기(원소 개수)
void insertionSort(int arr[], int n) {
    int key, j; // key: 삽입할 현재 원소의 값, j: 비교 대상 원소의 인덱스

    // 1. 두 번째 원소(인덱스 1)부터 마지막 원소(인덱스 n-1)까지 순회
    // 인덱스 0은 이미 정렬된 부분 집합으로 간주하고 시작
    for (int i = 1; i < n; i++) {
        key = arr[i]; // 현재 정렬할 대상 원소의 값을 key에 보관
        j = i - 1;    // key의 바로 왼쪽 원소 인덱스부터 비교를 시작

        // 2. key 값보다 큰 원소들을 오른쪽으로 한 칸씩 밀어내는 과정
        // - j >= 0 : 배열의 범위를 벗어나지 않도록 검사
        // - arr[j] > key : 왼쪽에 있는 값이 key보다 크면 밀어낼 대상
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 원소를 오른쪽으로 한 칸 이동(Shift)
            j--;                 // 그 다음 왼쪽 원소를 비교하기 위해 인덱스를 감소
        }

        // 3. 알맞은 위치를 찾았으므로(key보다 작은 값의 바로 오른쪽), key 값을 빈자리에 삽입
        arr[j + 1] = key;
    }
}

int main() {
    // 정렬할 5개의 정수가 들어있는 배열 생성
    int arr[] = {64, 25, 12, 22, 11}; 
    
    // 배열의 전체 메모리 크기 / 단일 원소의 메모리 크기 = 배열의 원소 개수(n) 계산
    int n = sizeof(arr) / sizeof(arr[0]); 

    // 정렬 전 배열 내용 출력
    printf("정렬 전 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 삽입 정렬 함수 호출 (배열과 배열의 크기를 전달)
    insertionSort(arr, n);

    // 정렬 후 배열 내용 출력
    printf("정렬 후 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}