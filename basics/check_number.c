#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += i;
        printf("i = %d, sum = %d\n", i, sum);
    }
    
    printf("Sum 1..%d = %d\n", n, sum);
    return 0;
}