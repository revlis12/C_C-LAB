#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    if( 1 <= num && num <= 10){

        for (int i=0; i<num; i++ ){
            printf("Hello for loop\n");
        }
    }
    return 0;
}