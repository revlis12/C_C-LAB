// 2진 탐색
#include <stdio.h>

int binarySearch(int arr[], int size, int target){
    int left = 0; // 시작 위치를 0으로 설정
    int right = size - 1; //끝 위치를 배열크기 -1 로 설정

    while(left <= right) { // 시작 위치 <= 끝 위치 동안 반복
        int middle = (left + right) /2; // 중간위치 계산

        if (arr[middle] == target){ // 만약 중간 위치의 값이 찹을 값과 같다면 중간 위치를 반환하고 종료
            return middle;
            break;
        }

        else if(arr[middle] < target){ // 그렇지 않고 작다면
            left = middle + 1; // 시작 위치를 중간 위치 +1로 변경
        }

        else{ // 그렇지 않다면 
            right = middle - 1; //시작 위치를 중간 위치 -1로 변경
        }
        
        
    }
    return -1; //반복이 종료될 때까지 값을 찾지 못했다면 -1반환

}

int main(){
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target); //size는 복사되어서 위 함수로 넘어감

    if (result != -1){
        printf("원소 %d는 인덱스 %d에 존재\n", target, result);
    }
    else{
        printf("원소를 찾지 못함\n");
    }
    
}