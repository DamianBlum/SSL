#include <stdio.h>

int main() {
    FILE *mensaje;
    mensaje = fopen("output.txt", "w");
    freopen("output.txt", "w", stdout);
    printf("Hello, World!\n");
    fclose(mensaje);
    return 0;
}