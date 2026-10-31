#include <stdio.h>

int main(void)
{
    int n;
    int cnt = 0;
    int sum = 0;
    double avg;

    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;

        cnt++;
        sum += n;
    }

    avg = (double)sum / cnt;

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);

    return 0;
}