# include <stdio.h>

int main() 
{
    int a, b, c;
    int temp;
    scanf("%d", &a);
    scanf("%d", &b);

    temp = b;
    while(temp > 0) 
    {
        printf("%d\n", a*(temp % 10));
        temp /= 10;
    }

    c = a*b;

    printf("%d", c);
    return 0;
}