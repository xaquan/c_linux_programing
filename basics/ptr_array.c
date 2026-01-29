#include <stdio.h>

int main(void){
    int a[5] = {10, 20, 30, 40, 50};

    int *p = a;

    printf("a[0] = %d\n", a[0]);
    printf("*p = %d\n", *p);

    printf("a[2] = %d\n", a[2]);
    printf("*(p+2) = %d\n", *(p + 2));

    *(p+1) = 999;
    printf("After *(p+1)=999 -> a[1] = %d\n", a[1]);
    
    return 0;
}