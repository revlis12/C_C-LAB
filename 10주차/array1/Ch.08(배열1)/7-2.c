#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    int count = 0;
    double avg;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);

        if ((i + 1) % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            count++;
        }
    }

    int odd_sum = 0;

    for (int i = 0; i < 10; i += 2)
    {
        odd_sum += arr[i];
    }

    avg = (double)odd_sum / count;

    printf("%d\n", sum);
    printf("%.1f", avg);

    return 0;
}