#include <stdio.h>

int main(){
    int kg;
    int cm;
    int bmi;

    scanf("%d", &cm);
    scanf("%d", &kg);
   

    bmi = kg + 100 - cm;

    if(bmi > 0){
        printf("%d\n", bmi);
        printf("Obesity\n");
        printf("Need control\n");
    }
    else{
        printf("%d", bmi);
    }
}