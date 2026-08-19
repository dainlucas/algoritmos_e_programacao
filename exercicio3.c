#include <stdio.h>

/*1. Escreva um programa que declare uma variável inteira com
valor 10 e um ponteiro para ela. Imprima o endereço da
variável, o valor guardado no ponteiro e o valor apontado
por ele usando o operador *
*/

int main(void) {
    int valor = 10;
    int *ptr = &valor;

    printf("Endereco da variavel: %p\nValor do ponteiro: %d\nValor apontado: %d\n", (void *)valor, (void *)ptr, *ptr);

    return 0;
}

/*2. Crie um programa com uma função chamada soma_mais_dez que recebe um ponteiro para um número
inteiro. A função deve somar 10 ao valor armazenado na variável original e alterar seu contéudo
diretamente na memória principal.*/

void soma_mais_dez(int *); 
int main(void) {
    int num = 0;
    int *ponteiro = &num;

    scanf("%d", &num);
    soma_mais_dez(ponteiro);
    printf("\nValor do numero: %d", num);

    return 0;
}

void soma_mais_dez(int *ptr) {
    *ptr = *ptr + 10;
}

/*3. Crie uma função chamada calcular_quadrado que recebe um número inteiro por valor.
A função deve calcular o quadrado desse número e apenas retornar o resultado.
No programa principal (main), mostre que a variável original passada para a função não
mudou de valor após a chamada.*/

int calcular_quadrado(int);
int main(void) {
    int entrada;
    int saida = 0;

    scanf("%d", &entrada);
    printf("Saida antes = %d\n", saida);
    saida = calcular_quadrado(entrada);
    printf("Saida depois = %d\n", saida);
    
    return 0;
}

int calcular_quadrado(int v) {
    return v*v;
}

/*4. Crie uma função chamada zerar_contador que recebe um número inteiro por referência.
A função deve forçar o valor dessa variavel a virar 0. No programa principal
mostre que a variavel original foi alterada diretamente*/

void zerar_contador(int *);

int main(void) {
    int valor;
    int *ponteiro = &valor;
    
    scanf("%d", &valor);
    printf("Valor antes: %d\n", valor);
    zerar_contador(ponteiro);
    printf("Valor depois: %d\n", valor);

    return 0;
}

void zerar_contador(int *ptr){
    *ptr = 0;
}

/*5. Uma função em C só pode retornar um valor com o comando return. Escreva uma função chamada
calcular_retangulo que recebe a base e a altura de um retângulo por valor. Ela deve calcular
a área e o perímetro. Como precisamos de duas respostas, use a passagem por referência para
entregar a área e o perímetro de volta ao programa principal*/

void calcular_retangulo(int, int, int *, int *);
int main(void) {
    int base = 10;
    int altura = 10;
    int area = 0;
    int perimetro = 0;

    scanf("%d %d", &base, &altura);
    calcular_retangulo(base, altura, &area, &perimetro);
    printf("Area = %d\nPerimetro = %d\n", area, perimetro);

    return 0;
}

void calcular_retangulo(int b, int h, int *ptA, int *ptP) {
    *ptA = b * h;
    *ptP = (2 * b) + (2 * h);
}

/*6. Escreva uma função chamada trocar_valores que recebe duas variáveis inteiras. O objetivo
é inverter os valores delas (o que estava na primeira vai para a segunda). Explique e prove no
código por que esse exercício obriga o uso de passagem por referência*/

void trocar_valores(int *, int *);
int main(void) {
    int valor1 = 10;
    int valor2 = 66;

    printf("Valor 1 ANTES: %d\nValor 2 ANTES: %d\n", valor1, valor2);
    trocar_valores(&valor1, &valor2);
    printf("Valor 1 DEPOIS: %d\nValor 2 DEPOIS: %d\n", valor1, valor2);
    
    return 0;
}

void trocar_valores(int *ptr1, int *ptr2) {
    int aux;
    aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
}

/*7. Declare um vetor de 5 números inteiros. Use um ponteiro para percorrer o vetor e imprimir
o valor de cada posição sem usar a notação de colchetes [], apenas somando posições ao endereço
do ponteiro*/

int main(void) {
    int lista[5] = {1, 2, 3, 4, 5};
    int *ptr = lista;

    for (int *ptr = lista; ptr < (lista + 5); ptr++) {
        printf("%d ", *ptr);
    }

    return 0;
}

/*8. Implemente uma função encontra_maior que recebe um vetor de inteiros, o tamanho dele e um
ponteiro para inteiro. A função deve achar o maior número do vetor e salvar o resultado no
endereço passado por parâmetro*/

#define TAMANHO 10

void encontra_maior(int *, int, int *);
int main(void) {
    int lista[TAMANHO] = {10, 8, 5, 22, 43, 3, 22, 4, 23, 10};
    int maior = 0;

    encontra_maior(lista, TAMANHO, &maior);
    printf("Maior numero: %d", maior);

    return 0;
}

void encontra_maior(int *ptr, int t, int *ptrI) {
    *ptrI = *ptr;
    for (int i = 0; i < t; i++) {
        if (*ptrI < *ptr) {
            *ptrI = *ptr;
        }
        ptr++;
    }
}

/*9. Escreva um programa que leia um vetor de 6 números inteiros. Declare dois ponteiros:
ptr_inicio (apontado para o primeiro elemento, indice 0) e ptr_fim (apontando para o último elemento, indice 5)
Crie um laço de repetição que troque os alores apontados por ptr_inicio e ptr_fim. A cada repetição, use a
aritmética de ponteiros para somar 1 ao ptr_inicio (avançar) e subtrair 1 do ptr_fim (recuar).
O laço deve parar quando os ponteiros se cruzarem. No final, exiba o vetor completamente invertido.
*/
