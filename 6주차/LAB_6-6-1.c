#include <stdio.h>

int main() {

    //증가
    for (int i=1; i<=3; i++) { //행
        for(int j=1; j<=i; j++){ //열
            printf("*");
        }
        printf("\n");
    }

    //감소
    for (int i=3; i>=1; i--) { //행
        for(int j=1; j<= i; j++){ //열
            printf("*");
        }
        printf("\n");
    }
}