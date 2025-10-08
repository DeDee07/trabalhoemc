#include <stdio.h>

struct Aluno {
    int numero;
    char nome[50];
    float media;
};

int main() {
    struct Aluno a2 = {
        .numero = 12345,
        .nome = "Maria Silva",
        .media = 8.5
    };
    
    // Exibindo os dados do aluno
    printf("Número: %d\n", a2.numero);
    printf("Nome: %s\n", a2.nome);
    printf("Média: %.2f\n", a2.media);
    
    return 0;
}