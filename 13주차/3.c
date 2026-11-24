#include <stdio.h>

int main(void){
    char food[5]; // 주의 utf-8 : 한글자당 3바이트
    printf("좋아하는 음식은?\n");
    scanf("%s", food);
    printf("좋아하는 음식 : %s\n", food);

    return 0;
}