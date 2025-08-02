#include <stdio.h>
#include <stdbool.h>

int main(){
    int num = 0, vetor[5] = {10, 15, 30, 60, 75};
    bool encontrado = false;
    
    printf("Qual número deseja encontrar?\n\n-> ");
    scanf("%d", &num);
    
    for (int i = 0; i < 5; i++){
        if (vetor[i] == num){
            printf("\nNúmero encontrado no índice %d", i);
            encontrado = true;
            break;
        }
    }
    
    if(encontrado == false){
        printf("\nNúmero não encontrado");
    }
    
    return 0;
}
