#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // Solicitar os coeficientes da equação
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    
    if (a == 0) {
        printf("Nao e uma equacao de segundo grau.\n");
        return 0;
    }

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Calcular o discriminante (delta)
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existe raiz real.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
}