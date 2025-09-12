#include <stdio.h>
 
struct Pessoa{
    char nome[31];
    int idade;
    float renda;
};
 
int main() {
    
    struct Pessoa pessoa[3] = {{"Ana Carolina", 21, 1700}, {"Beatriz", 19, 970}, {"Carlos", 102, 12000}};
    int i;
    
    /*
    for(i = 0; i < 3; i++){
        printf("Informe nome pessoa[%d]: ", i + 1);
        scanf(" %30[^\n]", pessoa[i].nome);
    
        printf("Informe idade pessoa[%d]: ", i + 1);
        scanf("%d", &pessoa[i].idade);
    
        printf("Informe renda pessoa[%d]: ", i + 1);
        scanf("%f", &pessoa[i].renda);
    } */
    
    for(i = 0; i < 3; i++){
        printf("\n%-30s %5d %10.2f", pessoa[i].nome, pessoa[i].idade, pessoa[i].renda);
    }
    
    return 0;
}