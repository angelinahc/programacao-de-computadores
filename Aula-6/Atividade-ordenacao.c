#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Crie um vetor de registros com o contato de 5 pessoas (nome, email e telefone). Alimente diretamente o vetor. Utilize o algoritmo de classificação a sua escolha para classificar os contatos por nome.
// Insertion sort

struct Contato{
    char nome[50];
    char email[50];
    char telefone[20];
};

int main(){
    struct Contato pessoas[5] = {
        {"Guilherme", "naosabedenada@gmail.com", "(44)99999-9999"},
        {"Fernandinha", "naosabedenada@gmail.com", "(44)99999-9999"},
        {"Maria", "naosabedenada@gmail.com", "(44)99999-9999"},
        {"Marcelinha", "naosabedenada@gmail.com", "(44)99999-9999"},
        {"Frederica", "naosabedenada@gmail.com", "(44)99999-9999"}
    };

    struct Contato elemento;
    int i, j;

    for(j = 0; j < 5; j++){
        elemento = pessoas[j];
        i = j - 1;

        while(i >= 0 && strcmp(pessoas[i].nome, elemento.nome) > 0){
            pessoas[i + 1] = pessoas[i];
            i--;
            pessoas[i + 1] = elemento;
        }
    }

    printf("Lista de contatos:\n");
    for(int k = 0; k < 4; k++){
        printf("{\n\tNome: %s,\n\tE-mail: %s,\n\tTelefone: %s\n}, \n", pessoas[k].nome, pessoas[k].email, pessoas[k].telefone);
    }
    printf("{\n\tNome: %s,\n\tE-mail: %s,\n\tTelefone: %s\n}", pessoas[4].nome, pessoas[4].email, pessoas[4].telefone);

    return 0;
}