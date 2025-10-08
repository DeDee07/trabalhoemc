#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct Aluno a1 = {12345, "João Silva", 8.5, 9.0, 8.75};
    
    printf("Dados do Aluno:\n");
    printf("Matrícula: %d\n", a1.matricula);
    printf("Nome: %s\n", a1.nome);
    printf("Nota 1: %.2f\n", a1.nota1);
    printf("Nota 2: %.2f\n", a1.nota2);
    printf("Média: %.2f\n", a1.media);
    
    return 0;
}