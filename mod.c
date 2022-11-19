#include <stdio.h>

int main(void){
    int a, b, n;
    scanf("%d", &b);
    scanf("%d", &n);

    a = b%n;

    printf("%d", a);
}