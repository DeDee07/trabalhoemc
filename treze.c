#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int numero;
    float media;
} Aluno;

Aluno novoAluno(const char* nome, int numero, float media) {
    Aluno aluno;
    
    strcpy(aluno.nome, nome);
    aluno.numero = numero;
    aluno.media = media;
    
    return aluno;
}

void mostrarAluno(Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Número: %d\n", a.numero);
    printf("Média: %.2f\n", a.media);
}

int main() {
    Aluno aluno1 = novoAluno("João Silva", 12345, 15.7);
    
    printf("Dados do Aluno:\n");
    mostrarAluno(aluno1);
    
    printf("\n");
    
    Aluno aluno2 = novoAluno("Maria Santos", 54321, 17.3);
    
    printf("Dados do Aluno 2:\n");
    mostrarAluno(aluno2);
    
    return 0;
}