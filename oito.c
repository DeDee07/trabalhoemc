#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    float media;
} Aluno;

int main() {
    Aluno a1;
    strcpy(a1.nome, "João Silva");
    a1.media = 15.0;
    
    printf("Dados originais:\n");
    printf("Nome: %s\n", a1.nome);
    printf("Média: %.1f\n", a1.media);
    printf("\n");
    
    a1.media = 17.5;

    printf("Dados após alteração:\n");
    printf("Nome: %s\n", a1.nome);
    printf("Média: %.1f\n", a1.media);
    
    return 0;
}