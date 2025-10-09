#include <stdio.h>

typedef struct {
    char nome[50];
    int numero;
    float media;
} Aluno;

void imprimirAluno(Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Número: %d\n", a.numero);
    printf("Média: %.2f\n", a.media);
}

int main() {
    Aluno aluno1 = {"João Silva", 12345, 15.7};
    
    printf("=== Informações do Aluno ===\n");
    imprimirAluno(aluno1);
    
    printf("\n=== Outro Aluno ===\n");
    Aluno aluno2 = {"Maria Santos", 67890, 18.5};
    imprimirAluno(aluno2);
    
    return 0;
}