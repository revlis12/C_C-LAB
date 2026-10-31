#include <stdio.h>

int main(void)
{
    int n;
    int cnt = 0;

    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;

        if (n % 3 != 0 && n % 5 != 0)
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}