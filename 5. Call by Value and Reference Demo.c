#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Original values: x = %d, y = %d\n", x, y);
    
    printf("Choose swap method:\n");
    printf("1. Call by Value\n");
    printf("2. Call by Reference\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        swapByValue(x, y);
        printf("After swapByValue: x = %d, y = %d\n", x, y);
    } else if (choice == 2) {
        swapByReference(&x, &y);
        printf("After swapByReference: x = %d, y = %d\n", x, y);
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
