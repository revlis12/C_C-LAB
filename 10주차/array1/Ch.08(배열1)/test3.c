#include <stdio.h>

int main()
{
    int arr[10];
    int odd = 0, even = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);

        if (i % 2 == 0)
        {
            odd += arr[i];
        }
        else
        {
            even += arr[i];
        }
    }

    printf("%d %d", odd, even);

    return 0;
}