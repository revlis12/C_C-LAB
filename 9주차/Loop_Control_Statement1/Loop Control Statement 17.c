#include <stdio.h>

int main(void)
{
    int n;
    int cnt = 0;
    int sum = 0;
    double avg;

    while (scanf("%d", &n) == 1)
    {
        if (n < 0 || n > 100)
            break;

        cnt++;
        sum += n;
    }

    avg = (cnt > 0) ? (double)sum / cnt : 0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}