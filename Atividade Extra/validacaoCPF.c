#include <stdio.h>

int main(){
    char cpf[12]; // 11 dígitos + '\0'
    int soma = 0, digito1 = 0, digito2 = 0;

    printf("Digite seu CPF (sem pontos ou traço): ");
    scanf("%s", cpf);

    for(int i = 0; i < 9; i++){
        soma += (cpf[i] - 48)  * (10 - i);
    }

    digito1 = 11 - (soma % 11);
    if (digito1 > 9){
        digito1 = 0;
    }

    if (digito1 != (cpf[9] - 48)){
        printf("O CPF informado é inválido!");
    } else {
        soma = 0;
        for(int j = 0; j < 10; j++){
            soma += (cpf[j] - 48)  * (11 - j);
        }

        digito2 = 11 - (soma % 11);
        if (digito2 > 9){
            digito2 = 0;
        }
        if(digito2 != (cpf[10] - 48)){
            printf("O CPF informado é inválido!");
        } else {
            printf("O CPF é válido!");
        }
    }

    return 0;
}