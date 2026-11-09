#include <stdio.h>

int main()
{
    int arr[6];
    int sum = 0;
    double avg;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 6.0;

    printf("%.1f", avg);

    return 0;
}