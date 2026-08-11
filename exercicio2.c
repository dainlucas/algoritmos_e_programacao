#include <stdio.h>

/*
1 - Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros
(use &). Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação.
*/

int main(void) {
    int num1 = 1;
    double num2 = 3.1;
    char char1 = 'a';

    printf("%d\n%.2f\n%c\n\n", num1, num2, char1);

    int *ptr1 = &num1;
    double *ptr2 = &num2;
    char *ptr3 = &char1;

    *ptr1 = 2;
    *ptr2 = 4.1;
    *ptr3 = 'x';

    printf("%d\n%.2f\n%c\n", num1, num2, char1);

    return 0;
}

/*
2 - Escreva um programa que contenha duas variáveis inteiras. Leia
essas variáveis do teclado. Em seguida, compare seus endereços e
exiba o conteúdo do maior endereço.
*/

int main(void) {
    int var1 = 0;
    int var2 = 0;

    scanf("%d %d", &var1, &var2);

    if (&var1 > &var2) {
        printf("Variavel de valor %d e endereço %p\né maior que variavel de valor %d e endereço %p\n", var1, &var1, var2, &var2);
    }   else {
        printf("Variavel de valor %d e endereço %p\né maior que variavel de valor %d e endereço %p\n", var2, &var2, var1, &var1);
    }
    
    return 0;
}

/*
3 - Declare um vetor de inteiros v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9}

Sem utilizar a notação de ‘[‘ ‘]’, faça:

a) Adicione 2 (+2) ao valor que está na primeira posição do
vetor
*/

int main(void) {
    int v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9};
    int *ptr = v;

    *ptr += 2;

    printf("%d\n", *ptr);

    return 0;
}

// b) Mostre o elemento da terceira posição do vetor;

int main(void) {
    int v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9};
    int *ptr = v;

    printf("%d\n", *(ptr+2));

    return 0;
}

// c) Mostre todos os elementos do vetor

int main(void) {
    int v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9};
    
    int *inicio = v;
    int *fim = v + 10;

    for (int *p = v; p < v + 10; p++) {
        printf("%d ", *p);
    }

    printf("\n");

    return 0;
}

// d) Encontre o menor elemento do vetor

int main(void) {
    int v[10] = {100, 7, 8, 12, 34, 3, 5, 3, 2, 9};
    int *ptr = v;
    int *aux = v;

    for (*ptr; ptr < v + 10; ptr++) {
        if (*ptr < *aux) {
            aux = ptr;
        }
    }

    printf("%d\n", *aux);

    return 0;
}

// e) Encontre a soma dos elementos do vetor

int main(void) {
    int v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9};
    int *ptr = v;
    int soma = 0;

    for (*ptr; ptr < v + 10; ptr++) {
        soma += *ptr;
    }

    printf("soma: %d\n", soma);

    return 0;
}

// f) Imprimir os elementos em ordem invertida

int main(void) {
    int v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9};

    for (int *ptr = v + 9; ptr >= v; ptr--) {
        printf("%d ", *ptr);
    }

    printf("\n");

    return 0;
}

/*
g) percorra todo o vetor usando somente dois ponteiros: um
começando do início do vetor e outro do final (incremente o
primeiro ponteiro até que ele atinja o final do vetor)
*/

int main(void) {
    int v[10] = {4, 7, 8, 12, 34, 3, 5, 3, 2, 9};
    int *ptrFinal = v+9;

    for (int *ptrInicio = v; ptrInicio <= ptrFinal; ptrInicio++) {
        printf("%d ", *ptrInicio);
    }

    printf("\n");
    
    return 0;
}
