# include <stdio.h>

int main(){
    int m_int = 15; // mp++이나 *mp 같은거 사용 불가 : 형변환 전에는 저런거 못씀
    double m_double = 3.1477;
    char m_char = 'M';
    
    void *mp;

    mp = &m_int; 
    printf("m_double %d\n",*(int*)mp); //mp에 있는 값을 정수형 포인터로 변환하라는 의미

    mp = &m_double;
    printf("m_double %.1f\n",*(double*)mp);

    mp = &m_char;
    printf("m_char %c\n",*(char*)mp);

}