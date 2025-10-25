#include <stdio.h>

// Métodos de ordenação

// Insertion Sort: eficiente quando aplicado a um número pequeno de elementos. Em termos gerais, ele percorre um vetor de elementos da esquerda para a direita e à medida que avança vai deixando os elementos mais à esquerda ordenados.

int insertionF(){
    int i, j, elemento, vetor[5] = {7, 4, 1, 5, 6};
    for(j = 1; j < 5; j++){
        elemento = vetor[j];
        i = j - 1;
        while(i >= 0 && vetor[i] > elemento){
            vetor[i + 1] = vetor[i];
            i--;
            vetor[i + 1] = elemento;
        }
    }

    printf("Resultado final: { ");
    for(int k = 0; k < 4; k++){
        printf("%d, ", vetor[k]);
    }
    printf("%d }", vetor[4]);

    return 0;
}

// Selection Sort: é um algoritmo de ordenação baseado em se passar sempre o menor valor do vetor para a primeira posição, depois o de segundo menor valor para a segunda posição, e assim é feito sucessivamente com os elementos restantes, até os últimos dois elementos.

int selectionF(){
    int i, j, menor, aux, vetor[5] = {7, 4, 1, 5, 6};
    for(i = 0; i < 5; i++){
        menor = i;
        for(j = i + 1; j < 5; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }

            aux = vetor[menor];
            vetor[menor] = vetor[i];
            vetor[i] = aux;
        }
    }

    printf("Resultado final: { ");
    for(int k = 0; k < 4; k++){
        printf("%d, ", vetor[k]);
    }
    printf("%d }", vetor[4]);

    return 0;
}

// Bubble Sort: a idéia é percorrer o vetor diversas vezes, a cada passagem fazendo flutuar para o topo o maior elemento da sequência.

int bubbleF(){
    int i, j, aux, vetor[5] = {7, 4, 1, 5, 6};
    for(i = 5; i > 0; i--){
        for(j = 1; j <= i - 1; j++){
            if(vetor[j - 1] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }
        }
        
    }

    printf("Resultado final: { ");
    for(int k = 0; k < 4; k++){
        printf("%d, ", vetor[k]);
    }
    printf("%d }", vetor[4]);

    return 0;
}

int main(){
    int res = 0;

    printf("Vamos fazer alguns exercícios para praticar os tipos de ordenação!\nEscolha qual exercício tu quer executar!\n\n");
    printf("1 - Insertion Sort.\n");
    printf("2 - Selection Sort.\n");
    printf("3 - Bubble Sort.\n\n-> ");

    scanf("%d", &res);

    printf("\n");

    switch (res)
    {

    case 1:
        insertionF();
        break;
    case 2:
        selectionF();
        break;
    case 3:
        bubbleF();
        break;
    default:
        printf("Resposta inválida!");
        break;
    }

    return 0;
}