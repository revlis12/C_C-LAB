#include <stdio.h>

int main(){
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 >= 4 && num2 >= 4){
        printf("WIN.");
    }
    else if(num1 >= 4 || num2 >= 4){
        printf("DRAW.");
    }
    else{
        printf("LOSE.");
    }
}