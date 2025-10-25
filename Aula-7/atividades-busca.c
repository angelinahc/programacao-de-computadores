#include <stdio.h>
#include <stdbool.h>

// 1. Implemente o algoritmo de busca sequencial em linguagem C. Utilize para testes, um vetor com 10
// elementos. Os valores devem ser inseridos diretamente no vetor.

int sequencialSimplesF(){
    int num, vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool encontrado = false;
    printf("Diga o número que procuras: ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        if(vetor[i] == num){
            encontrado = true;
            i = 10;
        }
    }

    if(encontrado){
        printf("Valor encontrado!");
    } else {
        printf("Valor não encontrado!");
    }

    return 0;
}


// 2. Refaça a atividade anterior assumindo que um valor pode aparecer várias vezes em um vetor. Neste
// caso, deve ser mostrado todas as posições (índices) onde o valor foi encontrado. Se a valor não for
// encontrado no vetor, a mensagem "Valor não encontrado" deve ser exibida ao usuário.

int sequencialDuplicadasF(){
    int num, posicoes[10], vetor[10] = {1, 2, 2, 4, 5, 5, 4, 8, 5, 1};
    bool encontrado = false;
    printf("Diga o número que procuras: ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        if(vetor[i] == num){
            encontrado = true;
            
        }
    }

    if(encontrado){
        printf("Valor encontrado!");
    } else {
        printf("Valor não encontrado!");
    }

    return 0;
}


// 3. Implemente o algoritmo de busca binária em linguagem C. Utilize para testes, um vetor com 15
// elementos. Os valores devem ser inseridos diretamente no vetor. Observe a necessidade de ordenar o
// vetor antes de iniciar a atividade de busca.

int binariaSimplesF(){


    return 0;
}


// 4. Altere o método de busca binária da atividade anterior para que, a cada divisão do vetor, seja
// mostrado quantos elementos foram descartados na busca.

int binariaDescartesF(){


    return 0;
}


// 5. Dado o vetor ordenado A = {1, 5, 6, 7, 12, 17, 22, 45, 65, 98, 100, 120, 150, 200, 231}, mostre passo a
// passo a pesquisa binária pelo elemento 100. Quantas comparações foram feitas? E se a pesquisa fosse
// seqüencial, quantas comparações seriam feitas?

int binariaPassoaPassoF(){


    return 0;
}


// 6. Sobre a busca binária, para um conjunto de 15 elementos, ocorreria, no mínimo, 1 comparação e, no
// máximo, 4 comparações. Essa afirmação é verdadeiraou falsa?



// 7. Em uma sequência ordenada de forma crescente, caso o elemento procurado seja menor que o
// elemento do meio, continua-se a busca com o subconjunto da direita. Em caso contrário, com o
// subconjunto da esquerda. Essa afirmação é verdadeira ou falsa?


int main(){
    int res = 0;

    printf("Vamos fazer alguns exercícios para praticar os métodos de busca!\nEscolha qual exercício tu quer executar!\n\n");
    printf("1 - Busca simples, vetor de 10 valores.\n");
    printf("2 - Busca num vetor com valores duplicados.\n");
    printf("3 - Ordenando um vetor e realizando busca binária.\n");
    printf("4 - Descartes de uma pesquisa binária.\n");
    printf("5 - Passo a passo de uma pesquisa binária.\n\n-> ");

    scanf("%d", &res);

    printf("\n");

    switch (res)
    {

    case 1:
        sequencialSimplesF();
        break;
    case 2:
        sequencialDuplicadasF();
        break;
    case 3:
        binariaSimplesF();
        break;
    case 4:
        binariaDescartesF();
        break;
    case 5:
        binariaPassoaPassoF();
        break;
    default:
        printf("Resposta inválida!");
        break;
    }

    return 0;
}