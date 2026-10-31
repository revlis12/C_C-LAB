#include <stdio.h>

int main(){
    int num;
    int result = 0;
    scanf("%d",&num);
    for(int i = num; i <= 100; i++){
        result = result + i;
    }

    printf("%d", result);
}