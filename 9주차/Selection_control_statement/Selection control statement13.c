#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num == 1){
        printf("1. ADD\n2. EDIT\n3. DEL\nYou selected ADD.");
    }
    else if(num == 2){
        printf("1. ADD\n2. EDIT\n3. DEL\nYou selected EDIT.");
    }
    else if(num == 3){
        printf("1. ADD\n2. EDIT\n3. DEL\nYou selected DEL.");
    }
    else{
        printf("1. ADD\n2. EDIT\n3. DEL\nWrong choice.");
    }
}