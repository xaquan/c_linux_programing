#include <stdio.h>

int sum_array(const int *arr, int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}

int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int len = (int)(sizeof(a) / sizeof(a[0]));

    printf("sum = %d\n", sum_array(a, len));
    return 0;
}