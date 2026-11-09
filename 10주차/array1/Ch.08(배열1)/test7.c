#include <stdio.h>

int main()
{
    int arr[100];
    int n = 0;

    while (n < 100)
    {
        scanf("%d", &arr[n]);

        if (arr[n] == 0)
            break;

        n++;
    }

    printf("%d\n", n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i] * 2);
        else
            printf("%d ", arr[i] / 2);
    }

    return 0;
}