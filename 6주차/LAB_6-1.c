#include <stdio.h>

// 선택 정렬(Selection Sort) 함수 정의
// arr[]: 정렬할 정수 배열, n: 배열의 크기(원소 개수)
void selectionSort(int arr[], int n) {
    int minIndex, temp; // temp: 두 값을 교환(Swap)할 때 사용할 임시 변수

    // 1. 배열의 첫 번째 원소부터 마지막 바로 전 원소까지 반복 (총 n-1번 회전)
    // 마지막 원소는 앞의 원소들이 정렬되면 자동으로 정렬된 상태가 되므로 n-1까지만 반복
    for (int i = 0; i < n - 1; i++) {
        
        // 일단 현재 위치(i)를 가장 작은 값이 있는 위치라고 가정하고 시작
        minIndex = i; 

        // 2. 현재 위치(i)의 다음 원소(i+1)부터 배열 끝(n-1)까지 검사하여 실제 최솟값을 찾기
        for (int j = i + 1; j < n; j++) {
            // 만약 현재 최솟값으로 알고 있는 위치(minIndex)의 값보다 더 작은 값(arr[j])을 발견하면
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // 최솟값의 위치(인덱스)를 새 발견한 위치(j)로 업데이트
            }
        }

        // 3. 가장 작은 값의 위치(minIndex)가 처음 가정한 위치(i)와 다르면 두 값의 위치를 교환(Swap)
        // 즉, 검색 범위 내의 최솟값을 현재 정렬 위치(i)로 이동
        if (minIndex != i) {
            temp = arr[i];          // 현재 위치(i)의 값을 임시 변수(temp)에 보관
            arr[i] = arr[minIndex]; // 최솟값(arr[minIndex])을 현재 위치(i)에 저장
            arr[minIndex] = temp;   // 보관해둔 원래 값(temp)을 최솟값이 있던 위치에 저장
        }
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

    // 선택 정렬 함수 호출 (배열과 배열의 크기를 전달)
    selectionSort(arr, n);

    // 정렬 후 배열 내용 출력
    printf("정렬 후 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}