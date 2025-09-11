    #include <stdio.h>
    #include <time.h>
    #include <stdlib.h>
    #include <stdbool.h>

    int ex1(int vetor[10]){
        int num = 0, pos = 0;
        bool encontrado = false;

        // Pedindo um número de chute:
        printf("Digite um número inteiro entre 0 e 100:\n-> ");
        scanf("%d", &num);

        // Imprimindo o vetor e retornando a resposta pro usuário:
        printf("Vetor: {");
        for(int j = 0; j < 10; j++){
            printf("%d", vetor[j]);
            if(j < 9){
                printf(", ");
            }

            // Encontrando o número dentro do vetor:
            if(vetor[j] == num){
                encontrado = true;
                pos = j;
            }
        }
        printf("}");

        if(encontrado == true){
            printf("\nValor encontrado na posição %d", pos);
        } else {
            printf("\nValor não encontrado!");
        }

        return 0;
    }

    int ex2(int vetor[10]){
        int menorValor = vetor[0], maiorValor = vetor[0], soma = 0; 

        printf("Vetor {");
        for(int i = 0; i < 10; i++){
            // Imprimindo valores do vetor
            printf("%d", vetor[i]);
            if(i < 9){
                printf(", ");
            }
            // Encontrando menor valor
            if(menorValor > vetor[i]){
                menorValor = vetor[i];
            }
            // Encontrando maior valor
            if(maiorValor < vetor[i]){
                maiorValor = vetor[i];
            }
            // Soma de todos os valores do vetor
            soma+=vetor[i];
        }
        printf("}");
        printf("\n");

        // Imprimindo resposta para o usuário:
        printf("Maior valor: %d\n", maiorValor);
        printf("Menor valor: %d\n", menorValor);
        printf("Soma de valores: %d\n", soma);
        printf("Média de valores: %.2f\n", soma / 10.0);

        return 0;
    }

    int ex3(int vetor[10]){
        for(int i = 0; i < 9; i++){
            if(vetor[i] != vetor[i+1]){
                printf("Os números do vetor não são todos iguais!");
                return 0;
            }
        }

        printf("Todos os números do vetor são iguais!");
        return 0;
    }

    int ex4(int gabarito[6]){
        int aposta[10], count = 0;

        // Gravando a aposta do usuário
        printf("Faça a sua aposta para sua mega-sena! (Números de 1 a 60)\n\n");
        for (int a = 0; a < 10; a++){
            printf("%dº número: ", a+1);
            scanf("%d", &aposta[a]);

            if((aposta[a] > 60) || (aposta[a] < 1)){
                printf("Número inválido!\n");
                a--;
            }
        }

        // Contagem de acertos
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 6; j++){
                if(gabarito[i] == aposta[j]){
                    count++;
                }
            }
        }

        // Impressão da aposta, gabarito e resultado
        printf("Resultado: {");
        for (int n = 0; n < 10; n++){
            printf("%d", aposta[n]);
            if(n < 9){
                printf(", ");
            }
        }
        printf("}\n");
        printf("Gabarito: {");
        for (int g = 0; g < 6; g++){
            printf("%d", gabarito[g]);
            if(g < 5){
                printf(", ");
            }
        }
        printf("}\n");
        printf("Quantidade de acertos: %d", count);
        if (count == 6){
            printf("\nParabéns! Você ganhou!");
        } else {
            printf("\nQue pena! Não foi dessa vez.");
        }

        return 0;
    }

int main(){
    int res = 0;

    srand(time(NULL));
    int vetor[10];
    int gabarito[6];

    for(int i = 0; i < 10; i++){
        vetor[i] = rand() % 100;
        if(i < 6){
            gabarito[i] = (rand() % 59) + 1;
        }
    }

    printf("Vamos fazer alguns exercícios para praticar vetores!\nEscolha qual exercício tu quer executar!\n\n");
    printf("1 - Leitura do número e retorno da posição no vetor.\n");
    printf("2 - Cálculos com os números individuais do vetor.\n");
    printf("3 - Verificação se todos os elementos do vetor são iguais.\n");
    printf("4 - Contagem de pontos da mega-sena\n\n-> ");

    scanf("%d", &res);

    printf("\n\n");

    switch (res)
    {

    case 1: // 1 - Escreva um programa alimente um vetor com 10 números inteiros distintos. Em seguida, leia um número qualquer do teclado e mostre na tela o índice em que o número se encontra no vetor, ou então a mensagem "Não encontrado!", se o número não estiver presente no vetor.
        ex1(vetor);
        break;
    case 2: // 2 - Escreva um programa que alimente um vetor com 10 números inteiros. Apresente na tela o menor valor do vetor, o maior valor do vetor, a soma dos valores do vetor e a média dos valores do vetor.
        ex2(vetor);
        break;
    case 3: // 3 - Escreva um programa que alimente um vetor com 10 números inteiros e apresente na tela uma mensagens informando se todos os elementos do vetor são iguais ou não.
        ex3(vetor);
        break;
    case 4: // 4 - Escreva um programa que alimente um vetor G de 6 elementos contendo o gabarito da Mega-Sena e um vetor A de 10 elementos contendo uma aposta. A seguir, mostre na tela quantos pontos fez o apostador.
        ex4 (gabarito);
        break;
    default:
        printf("Resposta inválida!");
        break;
    }

    return 0;
}