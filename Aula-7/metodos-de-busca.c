#include <stdio.h>
#include <stdbool.h>

// Métodos de busca: Pretende-se saber um determinado elemento x numa coleção de 10 números inteiros

// Pesquisa sequencial: Uma solução possível é percorrer o vetor desde a primeira posição até a última. Para cada posição, comparamos o elemento do vetor com x. Se forem iguais dizemos que x existe. Se chegarmos ao fim do vetor, dizemos que x não existe.

int sequencialF(){
    int i, x, vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool encontrado = false;

    printf("Informe o valor a ser procurado: ");
    scanf("%d", &x);

    for(i = 0; i < 10; i++){
        if(vetor[i] == x){
            encontrado = true;
            i = 10;
        }
    }

    if(encontrado){
        printf("Valor encontrado.");
    } else {
        printf("Valor não encontrado.");
    }

    return 0;
}

// Pesquisa binária: Se o vetor estiver ordenado, manteremos duas variáveis, esquerda e direita, que significam os limites (indices) esquerdo e direito do vetor. A idéia é que se o elemento x existe numa posição do vetor, então i tem de estar compreendido entre as variáveis esquerda e direita.

int binariaF(){
    int i, x, esquerda, direita, meio, vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool encontrado = false;

    printf("Informe o valor a ser procurado: ");
    scanf("%d", &x);

    esquerda = 0;
    direita = 9;
    meio = (esquerda + direita)/2;

    while(encontrado != true && esquerda <= direita){
        if(vetor[meio] == x){
            encontrado = true;
        } else if(x > vetor[meio]){
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }

        meio = (esquerda + direita)/2;

    }

    if(encontrado){
        printf("Valor encontrado.");
    } else {
        printf("Valor não encontrado.");
    }

    return 0;
}



int main(){
    int res = 0;

    printf("Vamos fazer alguns exercícios para praticar os métodos de busca!\nEscolha qual exercício tu quer executar!\n\n");
    printf("1 - Pesquisa sequencial.\n");
    printf("2 - Pesquisa binária.\n\n-> ");

    scanf("%d", &res);

    printf("\n");

    switch (res)
    {

    case 1:
        sequencialF();
        break;
    case 2:
        binariaF();
        break;
    default:
        printf("Resposta inválida!");
        break;
    }

    return 0;
}