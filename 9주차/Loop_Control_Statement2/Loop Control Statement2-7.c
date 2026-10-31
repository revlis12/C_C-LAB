#include <stdio.h>

int main(){
    int num;
    int result = 0;
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        result = result + i;
    }

    printf("%d",result);
}