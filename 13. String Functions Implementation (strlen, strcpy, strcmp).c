#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[100], str2[100], copy[100];
    int choice, result;
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("Choose operation:\n");
    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Compare\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Length of first string: %d\n", stringLength(str1));
            printf("Length of second string: %d\n", stringLength(str2));
            break;
        case 2:
            stringCopy(copy, str1);
            printf("Copied string: %s\n", copy);
            break;
        case 3:
            result = stringCompare(str1, str2);
            if (result == 0) {
                printf("Strings are equal\n");
            } else if (result < 0) {
                printf("First string is smaller\n");
            } else {
                printf("First string is larger\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
