#include <stdio.h>

int main() {
    
    printf("name=Ansh Mahapatra\n");
    printf("erp=11685\n");
    
    int a, b;
    float f;
    double d;
    char c;
    
    printf("Enter an int: ");
    scanf("%d", &a);
    
    printf("Enter a float: ");
    scanf("%f", &f);
    
    printf("Enter a double: ");
    scanf("%lf", &d);
    
    printf("Enter a char: ");
    scanf(" %c", &c);
    
    printf("\nYou entered:\n");
    printf("int = %d\n", a);
    printf("float = %.2f\n", f);
    printf("double = %.4lf\n", d);
    printf("char = %c\n", c);
    
    printf("\nEnter two integers to swap:\n");
    scanf("%d %d", &a, &b);
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    int temp = a;
    a = b;
    b = temp;
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}