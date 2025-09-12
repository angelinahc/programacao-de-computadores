// 1. Escreva um programa para armazenar dinamicamente um vetor de inteiros com uma quantidade de elementos informada pelo usuário (mínimo de 50 elementos).
// Atribua para cada elemento do vetor o valor do seu índice multiplicado por 2. Após isso, exiba na tela os 10 primeiros e os 10 últimos elementos do vetor.
// Por fim, libere a memória alocada para o vetor.

// 2. Escreva um programa que aloque dinamicamente uma estrutura para armazenar dados sobre veículos (fabricante, modelo, ano e preço), 
// sendo que o número de registros (pelo menos 2 registros) é lido do teclado e a memória alocada deve ser definida em função do tamanho da estrutura.
// Após isso, exiba na tela apenas os dados do segundo veículo cadastrado. Por fim, libere a memória alocada para a estrutura.

// 3. Escreva um programa que leia números inteiros do teclado e os armazene em um vetor alocado dinamicamente.
// O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados,
// ele irá digitar o número 0 (zero). Os dados devem ser armazenados na memória deste modo:

// a) Inicie o programa com um vetor de números inteiros de tamanho 3 alocado dinamicamente;

// b) Caso o espaço alocado esteja cheio, realoque espaço para mais 3 números inteiros;

// c) Após o usuário digitar o número 0 (zero), exiba na tela os elementos do vetor;

// d) Por fim, libere a memória alocada para o vetor.

#include <stdio.h>
#include <stdlib.h>

int ex1(){
    int res = 0;
    int* memoria;
    while(res < 50){
        printf("\nInforme o tamanho da memória a ser alocada (mínimo de 50 elementos):\n-> ");
        scanf("%d", &res);

        if(res < 50){
            printf("\nQuantidade inválida, preencha novamente!\n");
        }
    }

    memoria = malloc(res * sizeof(int));

    if(memoria == NULL){
        printf("Memória insuficiente!");
        return 1;
    }

    for(int i = 0; i < res; i++){
        memoria[i] = i * 2;
    }
    printf("Array: {");
    for(int j = 0; j < res; j++){
        printf("%d", memoria[j]);
        if(j < (res-1)){
            printf(", ");
        }
    }
    printf("}");

    free(memoria);

    return 0;
}

struct Veiculo {
    char fabricante[31];
    char modelo[21];
    int ano;
    float preco;
};
int ex2(){
    int qtdVeiculos;
    struct Veiculo *veiculos;

    while(qtdVeiculos < 2){
        printf("\nQuantos veículos você deseja cadastrar?\n-> ");
        scanf("%d", &qtdVeiculos);

        if(qtdVeiculos < 2){
            printf("\nQuantidade inválida, preencha novamente!\n");
        }
    }

    veiculos = malloc(qtdVeiculos * sizeof(struct Veiculo));

    if (veiculos == NULL) {
        printf("Memória insuficiente.\n");
        return 1;
    }

    for(int i = 0; i < qtdVeiculos; i++){
        printf("\nPara o veículo %d, digite:\n", i+1);
        printf("Fabricante: ");
        scanf(" %30[^\n]", veiculos[i].fabricante);
        printf("\nModelo: ");
        scanf(" %20[^\n]", veiculos[i].modelo);
        printf("\nAno: ");
        scanf("%d", &veiculos[i].ano);
        printf("\nPreço: ");
        scanf("%f", &veiculos[i].preco);
    }

    // Imprimindo o segundo veículo
    printf("\nVeículo 2:\nFabricante: %s\nModelo: %s\nAno: %d\nPreço: %.2f", veiculos[1].fabricante, veiculos[1].modelo, veiculos[1].ano, veiculos[1].preco);

    return 0;
}

int ex3(){

    return 0;
}

int main(){
    int res = 0;
    printf("Vamos fazer alguns exercícios para praticar ponteiros!\nEscolha qual exercício tu quer executar!\n\n");
    printf("1 - Alocação de memória com atribuição de valores.\n");
    printf("2 - Estrutura para armazenar dados sobre veículos, com uma memória dinâmica.\n");
    printf("3 - Sequência de números infinita.\n\n-> ");

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
    default:
        printf("Resposta inválida!");
        break;
    }

    return 0;
}