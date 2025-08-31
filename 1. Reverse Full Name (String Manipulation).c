#include <stdio.h>

int main() {
    char name[100];
    int i, len = 0;
    
    printf("Enter full name: ");
    scanf("%[^\n]", name);
    
    while (name[len] != '\0') {
        len++;
    }
    
    printf("Reversed name: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }
    printf("\n");
    
    return 0;
}
