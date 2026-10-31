#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 > 0 && num2 > 0 && num3 > 0){
        printf("All Positive");
    }
    else if(num1 == 0 || num2 == 0 || num3 == 0){
        printf("Contain Zero");
    }
    else{
        printf("Mixed");
    }
}