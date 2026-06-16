#include <stdio.h>

int main() {
    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de calculo de média ***\n");
    printf("digite a sua primeira nota:  \n");
    scanf("%d", &nota1);

    printf("digite a sua segunda nota:  \n");
    scanf("%d", &nota2);

    printf("digite a sua terceira nota:  \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A media é : %.1f\n", media);





    return 0;

}