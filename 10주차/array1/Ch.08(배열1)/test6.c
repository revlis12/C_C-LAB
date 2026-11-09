#include <stdio.h>

int main()
{
    int arr[100];
    int n = 0;
    int sum = 0;
    int count = 0;
    double avg;

    while (n < 100)
    {
        scanf("%d", &arr[n]);

        if (arr[n] == 0)
            break;

        if (arr[n] % 5 == 0)
        {
            sum += arr[n];
            count++;
        }

        n++;
    }

    avg = (double)sum / count;

    printf("%d\n", count);
    printf("%d\n", sum);
    printf("%.1f", avg);

    return 0;
}