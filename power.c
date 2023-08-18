#include <stdio.h>
int power(int num1, int num2);
int main() {
    int base, num, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number: ");
    scanf("%d", &num);
    result = power(base,num);
    printf("%d^%d = %d", base, num, result);
    return 0;
}

int power(int base, int num) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
