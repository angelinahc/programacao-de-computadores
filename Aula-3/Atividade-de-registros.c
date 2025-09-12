
// ACME Inc., uma organização com mais de 1500 funcionários, está tendo problemas de espaço em disco no seu servidor de arquivos.
// Para tentar resolver este problema, o Administrador de Rede precisa saber qual o espaço em disco ocupado pelas contas dos usuários, 
// e identificar os usuários com maior espaço ocupado. Através de um aplicativo baixado da Internet, ele conseguiu gerar os seguintes dados:

// alexandre	456123789
// anderson	1245698456
// antonio		123456456
// carlos		91257581
// cesar		987458
// rosemary	789456125


// Neste arquivo, o primeiro campo corresponde ao login do usuário e o segundo ao espaço em disco (em bytes) ocupado pelo seu diretório home.
// Escreva um programa em linguagem C que, utilizando registros, armazene o login e o espaço em disco ocupado por cada usuário e gere a seguinte saída:

// Nr.	   Usuário 	       Espaço utilizado 	    % de uso
// --------------------------------------------------------
// 1 	   alexandre 	          434.99 MB 	       16.85
// 2 	   anderson 	         1187.99 MB 	       46.02
// 3 	   antonio 	              117.73 MB 	        4.56 
// 4 	   carlos 		           87.03 MB 	        3.37
// 5 	   cesar 		            0.94 MB	            0.04
// 6 	   rosemary 	          752.88 MB 	       29.16
// -------------------------------------------------------- 
// Espaço total ocupado: 2581.58 MB
// Espaço médio ocupado: 430.26 MB

#include <stdio.h>

struct Registro {
    char nome[51];
    float espaco;
};

int main(){
    float soma = 0, porcent = 0, espacoMB = 0;
    struct Registro registro[6] =
    {
        {"alexandre", 456123789},
        {"anderson", 1245698456},
        {"antonio", 123456456},
        {"carlos", 91257581},
        {"cesar", 987458},
        {"rosemary", 789456125}
    };

    // Calculando o espaço total ocupado
    for (int i = 0; i < 6; i++){
        soma += registro[i].espaco;

    }

    // Imprimindo os dados por registro
    printf("Nº    Usuário                                         Espaço          %% do uso");
    printf("\n------------------------------------------------------------------------------");
    for (int j = 0; j < 6; j++){
        espacoMB = (registro[j].espaco / 1000000);
        porcent = (registro[j].espaco / soma)*100;

        printf("\n%-6d %-35s %15.2fMB %15.2f %%", j+1, registro[j].nome, espacoMB, porcent);
    }
    printf("\n------------------------------------------------------------------------------");

    // Imprimindo os dados totais
    printf("\nEspaço total ocupado: %.2f MB", soma/1000000);
    printf("\nEspaço médio ocupado: %.2f MB", (soma/1000000)/6);

    return 0;
}