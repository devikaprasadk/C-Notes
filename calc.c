#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    int choice;

    printf("--- C Calculator ---\n");
    printf("1. Use Switch Case logic\n");
    printf("2. Use If-Else logic\n");
    printf("Choose logic type (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);


    if (choice == 1) {
        printf("\n[Executing via Switch Case]\n");
        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': 
                if (num2 != 0) result = num1 / num2;
                else { printf("Error! Division by zero.\n"); return 1; }
                break;
            default: printf("Invalid operator!\n"); return 1;
        }
    } 
    else if (choice == 2) {
        printf("\n[Executing via If-Else]\n");
        if (op == '+') result = num1 + num2;
        else if (op == '-') result = num1 - num2;
        else if (op == '*') result = num1 * num2;
        else if (op == '/') {
            if (num2 != 0) result = num1 / num2;
            else { printf("Error! Division by zero.\n"); return 1; }
        }
        else { printf("Invalid operator!\n"); return 1; }
    } 
    else {
        printf("Invalid choice selection.\n");
        return 1;
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

    return 0;
}