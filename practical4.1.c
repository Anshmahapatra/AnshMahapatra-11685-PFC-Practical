#include <stdio.h>

int main() {
    
    printf("name=Ansh Mahapatra\n");
    printf("erp=11685\n");

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("Max = %d\n", a);
        } else {
            printf("Max = %d\n", c);
        }
    } else {
        if (b > c) {
            printf("Max = %d\n", b);
        } else {
            printf("Max = %d\n", c);
        }
    }2

    return 0;
}