#include <stdio.h>

int main(){
    int num1;
    int num2;
    int result;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){
        result = num1 - num2;
        printf("%d", result);
    }
    else{
        result = num2 - num1;
        printf("%d", result);
    }
}