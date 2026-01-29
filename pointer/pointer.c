#include <stdio.h>

int main(void) {
    int n = 10;
    int *p = &n;

    printf("n value      = %d\n", n);
    printf("n address    = %p\n", (void*)&n);

    printf("p value(addr)= %p\n", (void*)p);
    printf("*p value     = %d\n", *p);

    *p = 99;  // change n using pointer
    printf("n after *p=99 -> %d\n", n);

    return 0;
}
