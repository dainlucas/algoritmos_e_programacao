#include <stdio.h>

// Exercicio 1
int main(void) {
    int a = 10;
    int b = 25;
    int *p1 = &a;
    int *p2 = &b;

    *p1 = *p1 + 5;
    p2 = p1;
    *p2 = *p2 * 2;

    printf("Valor de a: %d\nValor de b: %d\nValor de p1: %d\nValor de p2: %d\n", a, b, *p1, *p2);

    return 0;
}

// Exercicio 2
int main(void) {
    int saldo = 1000;
    int *p;

    p = &saldo;
    *p = saldo;
    *p = 2000;

    printf("saldo = %d\n", saldo);
    

    return 0;
}

// Exercicio 3
int main(void) {
    int x = 10;
    int y = 20;
    int *p1 = &x;
    int *p2 = &y;

    *p1 = 15;
    p2 = p1;
    *p2 = *p2 + 5;

    printf("Valor de x: %d\nValor de y: %d\nEndereço de p1: %p\nEndereço de p2: %p\n", x, y, p1, p2);
    printf("\n\n %d\n", (p1 != p2));

    return 0;
}

// Exercicio 4
int main(void) {
    int a = 5;
    int *p = &a;

    printf("%p\n", p);

    *p = 50;
    p = &a;

    int b;
    b = *p;

    int *q;
    q = p;
    
    return 0;
}

// Exercicio 5
int main(void) {
    int n = 7;
    int *p1 = &n;
    int *p2 = &n;

    *p1 = *p1 * 2;
    *p2 = *p2 + 3;

    printf("Valor de n: %d\n", n);
    printf("Endereço de n: %p", (void *)&p2);

    return 0;
}
