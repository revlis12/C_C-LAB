#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num > 10){
        printf("%d\n", num);
        printf("Larger than 10.\n");
    }
    else{
        printf("%d", num);
    }
}