#include <stdio.h>

void min_max(const int *arr, int len, int *min_out, int *max_out){
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    *min_out = min;
    *max_out = max;    
}

void main(void){
    int a[] = {5, 3, 8, 1, 4};
    int len = (int)(sizeof(a) / sizeof(a[0]));
    int min, max;

    min_max(a, len, &min, &max);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}   