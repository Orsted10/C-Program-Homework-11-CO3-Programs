#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num, choice, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Choose operation:\n");
    printf("1. Factorial\n");
    printf("2. Fibonacci\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Factorial of %d = %d\n", num, factorial(num));
            break;
        case 2:
            printf("Fibonacci series up to %d terms: ", num);
            for (i = 0; i < num; i++) {
                printf("%d ", fibonacci(i));
            }
            printf("\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
