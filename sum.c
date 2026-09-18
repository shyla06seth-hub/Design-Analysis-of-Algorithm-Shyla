#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    float average = (float)sum / n;

    printf("\nAverage = %.2f", average);

    return 0;
}