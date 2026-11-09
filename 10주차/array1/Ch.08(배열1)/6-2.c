#include <stdio.h>

int main()
{
    int arr[100];
    int n = 0;
    int num;
    int max, min;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        arr[n] = num;
        n++;
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("%d", max - min);

    return 0;
}