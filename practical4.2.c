#include <stdio.h>

int main() {
    printf("name=Ansh Mahapatra\n");
    printf("erp=11685\n");
    
    char op;
    float a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;
        
        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;

}
