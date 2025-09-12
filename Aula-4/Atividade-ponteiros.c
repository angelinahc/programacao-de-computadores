// 1. Escreva um programa que declare e inicialize variáveis para um inteiro, um float e um char. Também
// declare um ponteiro para um inteiro, um float e um char. Associe as variáveis aos ponteiros.
// Modifique os valores de cada variável usando os ponteiros. Mostre na tela os valores das variáveis
// antes e depois da modificação.

// 2. Escreva um programa que contenha um vetor de inteiros contendo 10 elementos. Mostre na tela o
// endereço de memória de cada elemento desse vetor.

// 3. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços de memória e
// exiba o maior endereço.

// 4. Escreva um programa que contenha um vetor de inteiros contendo 5 elementos. Utilizando
// apenas ponteiros, leia esse vetor e imprima o dobro de cada valor lido.

// 5. Escreva um programa para encontrar o maior número entre dois números inteiros usando
// ponteiros.

#include <stdio.h>

int ex1(){

    // Declaração de variáveis
    int i = 1;
    float f = 1.0;
    char c = 'a';

    // Declaração de ponteiros
    int* ptrI = &i;
    float* ptrF = &f;
    char* ptrC = &c;

    // Imprimindo valores de antes da alteração
    printf("Valores de antes da alteração:\ni = %d\nf = %.2f\nc = %c", i, f, c);

    // Mudando os valores das variáveis através de seus ponteiros
    *ptrI = 2;
    *ptrF = 2.0;
    *ptrC = 'b';

    // Imprimindo valores de depois da alteração
    printf("\n\nValores de depois da alteração:\ni = %d\nf = %.2f\nc = %c", i, f, c);
}

int ex2(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Endereços dos elementos de uma array:");

    for(int i = 0; i < 10; i++){
        printf("\nElemento %d: %p", i, &arr[i]);
    }

    return 0;
}

int ex3(){
    int var1, var2;

    // Imprimindo endereços
    printf("Variável 1: %p", &var1);
    printf("\nVariável 2: %p", &var2);

    // Imprimindo qual tem o endereço maior
    if(&var1 > &var2){
        printf("\n\nA variável 1 tem um endereço maior.");
    } else {
        printf("\n\nA váriável 2 tem um endereço maior.");
    }

    return 0;
}

int ex4(){
    int arr[5] = {2, 5, 87, 97, 34};
    int* ptr = arr;

    printf("Lista de números duplicadas {");
    for(int i = 0; i < 5; i++){
        printf("%d", *(ptr + i) * 2);
        if (i < 4){
            printf(", ");
        }
    }
    printf("}");

    return 0;
}

int ex5(){
    int var1 = 7, var2 = 10;
    int* ptr1 = &var1;
    int* ptr2 = &var2;

    // Imprimindo endereços
    printf("Variável 1: %d", var1);
    printf("\nVariável 2: %d", var2);

    // Imprimindo qual tem o endereço maior
    if(*ptr1 > *ptr2){
        printf("\n\nA variável 1 é maior.");
    } else {
        printf("\n\nA váriável 2 é maior.");
    }

    return 0;
}

int main(){
    int res = 0;
    printf("Vamos fazer alguns exercícios para praticar ponteiros!\nEscolha qual exercício tu quer executar!\n\n");
    printf("1 - Mudança de valores através dos ponteiros.\n");
    printf("2 - Apresentando o local da memória de um array.\n");
    printf("3 - Exibição do maior endereço de memória entre duas variáveis.\n");
    printf("4 - Imprimindo o dobro de cado valor de um array com ponteiros\n");
    printf("5 - Encontrando o maior número entre duas variáveis INT usando ponteiros.\n\n-> ");

    scanf("%d", &res);

    printf("\n");

    switch (res)
    {

    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4 ();
        break;
    case 5:
        ex5 ();
        break;
    default:
        printf("Resposta inválida!");
        break;
    }

    return 0;
}