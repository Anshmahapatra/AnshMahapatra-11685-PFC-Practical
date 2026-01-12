#include <stdio.h>

int main() {
    
    printf("name=Ansh Mahapatra\n");
    printf("erp=11685\n");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    return 0;
}