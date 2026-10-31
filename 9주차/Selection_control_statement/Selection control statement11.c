#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int max = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        max = num1;
    }
    else if(num2 > num1 && num2 > num3){
        max = num2;
    }
    else{
        max = num3;
    }
    printf("max = %d", max);
}