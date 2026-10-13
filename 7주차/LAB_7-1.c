# include <stdio.h>

int main() {
    int i = 10;
    int *p;

    p = &i;

    printf("*p = %d \n", p); // 주소값
    printf("(*p)++ = %d \n", (*p)++); // 현재값 반환 후 증가 (++ > * 이지만 실행순서와 우선순위가 다를 수 있다 )
    printf("(*p)+1 = %d \n", (*p)+1); // 값1 증가 후 결과 저장
    printf("*p+=1 = %d \n", *p+=1); // *p+=1과 동일
    printf("*p=*p+1 = %d \n", *p=*p+1); // 값을 1 더하고 결과 저장
    printf("++*p = %d \n", ++*p); // 값을 먼저 1증가 후 증가된 값 반환
    printf("++(*p) = %d \n", ++(*p)); // ++p와 동일, 연산순서를 명확히 표시한 것

    return 0;
}