// Quadrados mágicos

// A origem dos quadrados mágicos não é conhecida, mas os antigos chineses, hindús e árabes foram os primeiros a trabalhar com os quadrados mágicos.
// O exemplo mais antigo é o Loh-Shu encontrado na China, trata-se de um quadrado mágico de ordem 3 que data de 2850 a.C.

// Um quadrado mágico é uma matriz quadrada de números inteiros positivos em que a soma de cada linha, de cada coluna, da diagonal principal e da diagonal secundária tem o mesmo valor M,
// chamado de constante mágica. Note que nenhum número pode ser repetido em um quadrado mágico. Veja alguns exemplos:

// Exemplo 1:

// +-----+-----+-----+
// |  8  |  1  |  6  |
// +-----+-----+-----+
// |  3  |  5  |  7  |
// +-----+-----+-----+
// |  4  |  9  |  2  |
// +-----+-----+-----+


// Exemplo 2:

// +-----+-----+-----+
// |  8  |  3  |  4  |
// +-----+-----+-----+
// |  1  |  5  |  9  |
// +-----+-----+-----+
// |  6  |  7  |  2  |
// +-----+-----+-----+


// Exemplo 3:

// +-----+-----+-----+
// |  2  |  9  |  4  |
// +-----+-----+-----+
// |  7  |  5  |  3  |
// +-----+-----+-----+
// |  6  |  1  |  8  |
// +-----+-----+-----+


// Sobre a atividade:

// Com base no exposto, escreva um programa que verifique se uma matriz de ordem 3 preenchida é um quadrado mágico ou não.

#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz[3][3] =
    {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };

    int soma[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    srand(time(NULL));

    for(int i = 0; i < 3; i++){
        // Soma das linhas
        soma[0] += matriz[i][0];
        soma[1] += matriz[i][1];
        soma[2] += matriz[i][2];

        // Soma das colunas
        soma[3] += matriz[0][i];
        soma[4] += matriz[1][i];
        soma[5] += matriz[2][i];

        // Soma diagonais
        soma[6] += matriz[i][i];
        soma[7] += matriz[i][2-i];
    }

    // Verificação de igualdade
    for (int j = 0; j < 7; j++){
        if (soma[j] != soma[j+1]){
            printf("Essa matriz não é um quadrado mágico!");
            return 0;
        }
    }
    printf("Essa matriz é um quadrado mágico!");

}