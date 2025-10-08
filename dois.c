#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    Ponto p1;
    p1.x = 3;
    p1.y = 4;
    
    printf("(%d,%d)\n", p1.x, p1.y);
    
    return 0;
}