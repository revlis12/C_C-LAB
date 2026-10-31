#include <stdio.h>

int main(void)
{
    int n;

    while (scanf("%d", &n) == 1)
    {
        if (n == -1)
            break;

        if (n % 3 != 0)
            continue;

        printf("%d\n", n / 3);
    }

    return 0;
}