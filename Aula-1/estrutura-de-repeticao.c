#include <stdio.h>

void metodo1() {
    int num1, num2, num3;
    
    printf("Informe primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe segundo número: ");
    scanf("%d", &num2);
    
    printf("Informe terceiro número: ");
    scanf("%d", &num3);
    
    int soma = num1 + num2 + num3;
    printf("Soma: %d", soma);
}

void metodo2() {
    int num = 0, soma = 0;
    
    for(int i = 0; i < 3; i++){
        printf("Informe o número %d: ", i+1);
        scanf("%d", &num);
        
        soma += num;
    }

    printf("Soma: %d", soma);
}

void metodo3() {
    int num[3], soma = 0;
    
    for(int i =0; i < 3; i++){
        printf("Informe o número %d: ", i+1);
        scanf("%d", &num[i]);
        
        soma += num[i];
    }

    printf("Soma: %d", soma);
}

int main(){
    int res = 0;
    
    printf("Qual método você deseja usar?\n\n1 - Estrutura manual\n2 - Estrutura de repetição padrão\n3 - Estrutura de repetição com array\n\n-> ");
    scanf("%d", &res);
    
    if (res == 1){
        metodo1();
    } else if (res == 2) {
        metodo2();
    } else {
        metodo3();
    }
    
    return 0;
}
