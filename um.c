#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int* a = &x;
    int* b = &y;

    printf("x: %d, y: %d\n", *a, *b);
    return 0;
}