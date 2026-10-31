#include <stdio.h>

int main(){
    int age;
    int yearsLater = 0;

    scanf("%d", &age);

    if(age >= 20){
        printf("adult\n");
    }
    else{
        yearsLater = 20 - age;
        printf("%d years later", yearsLater);
    }
}