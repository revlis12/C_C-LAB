#include <stdio.h>

int main() {

    int n = 0;

    printf("자연수 입력 : ");
    scanf("%d",&n);

    for(int i=n; i >= 1; i--) {  //행
        for (int j=1; j<= i; j++) { //열
            printf("*");

        } 
        printf("\n");
    }

    return 0;
}