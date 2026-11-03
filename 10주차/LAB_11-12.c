#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch= 'p';
    int n = 3;

    // 문자열 길이 구하기
    int len = strlen(str1);
    printf("str1의 길이 : %d\n", len);

    // 문자열 복사
    strcpy(str3, str1);
    printf("str1을 str3에 복사 : %s\n", str3);

    // 지정된 개수만큼 문자열 복사 후 널 문자 처리
    strncpy(str3, str2, n);
    str3[n] = '\0';
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n",n, str3);

    // 문자열 대소 비교
    printf("str1과 str2 비교: %d\n",strcmp(str1,str2));

    // 지정된 개수만큼 문자열 비교
    printf("str1과 str2의 첫 %d 문자 비교: %d\n",n, strncmp(str1, str2, n));

    // 문자열 연결
    strcat(str1, str2);
    printf("str2를 str1에 연결 : %s\n", str1);

    // 지정된 개수만큼 문자열 연결
    strncat(str3, str1, n);
    printf("str1의 첫 %d의 문자를 str3에 연결 : %s\n",n, str3);

    // 특정 문자 검색
    char*ptr_ch= strchr(str1, ch);
    printf("str1에서 '%c'의 첫번째 출현 : %s\n",ch,ptr_ch);

    // 특정 문자열 검색
    char* ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫번째 출현 : %s\n", ptr_str ? ptr_str : "찾을 수 없음");
    return 0;
}