#include <stdio.h>

int main() {
    int a, b, result;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    switch (c) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;
        case '-':
            result = a - b;
            printf("%d\n", result);
            break;
        case '*':
            result = a * b;
            printf("%d\n", result);
            break;
        case '/':
            if (b == 0) {
                printf("error\n");
            } else {
                result = a / b;
                printf("%d\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
