#include <stdio.h>

struct Retangulo {
    int largura;
    int altura;
};

int calcularArea(struct Retangulo ret) {
    return ret.largura * ret.altura;
}

int main() {
    struct Retangulo meuRetangulo = {10, 5};
    int area = calcularArea(meuRetangulo);
    
    printf("Retângulo:\n");
    printf("Largura: %d\n", meuRetangulo.largura);
    printf("Altura: %d\n", meuRetangulo.altura);
    printf("Área: %d\n", area);
    
    struct Retangulo outroRetangulo = {8, 6};
    printf("\nOutro retângulo:\n");
    printf("Largura: %d\n", outroRetangulo.largura);
    printf("Altura: %d\n", outroRetangulo.altura);
    printf("Área: %d\n", calcularArea(outroRetangulo));
    
    return 0;
}