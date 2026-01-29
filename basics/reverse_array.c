#include <stdio.h>

void reverse_array(int *arr, int len){
    int *left = arr;
    int *right = arr + len - 1;

    while(left < right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void print_array(const int *arr, int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(void){
    int arr[] = {1, 2, 3, 4, 5};
    int len = (int)(sizeof(arr) / sizeof(arr[0]));

    reverse_array(&arr[0], len);

    // Print the reversed array
    printf("Reversed array: ");
    print_array(&arr[0], len);

    return 0;
}