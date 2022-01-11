#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *reverse;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    reverse = (int *)malloc(num * sizeof(int));
    for (int i = num - 1, j = 0; j < num; --i, j++)
    {
        *(reverse + j) = *(arr + i);
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(reverse + i));
    return 0;
}