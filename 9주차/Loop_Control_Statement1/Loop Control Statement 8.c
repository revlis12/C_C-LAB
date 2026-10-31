#include <stdio.h>

int main(void)
{
    int n;
    int small = 0;
    int large = 0;

    while (scanf("%d", &n) == 1)
    {
        if (n < 50)
            small++;
        else
            large++;

        if (n >= 100)
            break;
    }

    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}