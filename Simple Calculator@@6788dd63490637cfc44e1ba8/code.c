#include <stdio.h>

int main() {
    int a, b, result;
    char c;

    // Fix: Add space before %c to avoid reading leftover '\n' character
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
                printf("Error: Division by zero\n");
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
