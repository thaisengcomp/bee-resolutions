#include <stdio.h>

int main () {

    float volume, diametro, raio, area, altura;

    while(scanf("%f%f", &volume, &diametro) != EOF){

        raio = diametro / 2.0;
        area = 3.14 * raio * raio;
        altura = volume / area;

        printf("ALTURA = %.2f\n", altura);
        printf("AREA = %.2f\n", area);
    }

    return 0;
}