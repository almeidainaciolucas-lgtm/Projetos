#include <stdio.h>

int main() {

int numero1 = 1, resultado;

printf("antes incremento %d\n", numero1);

// seria o mesmo numero1 = numero1 + 1
// seria o mesmo numero1 += 1
//pos incremento:
//resultado = numero1
//numero1++;

numero1++;
printf("apos incremento %d\n", numero1);

// seria  mesmo numero1 = numero1 - 1 
//seria o mesmo numero1 -= 1
numero1--;
printf("apos decremento %d\n", numero1);

resultado = numero1++;
//printf("apos incremento %d\n", numero1);
printf("apos pós incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("apos  preincremento - numero 1: %d - Resultado: %d\n", numero1, resultado);


resultado = numero1--;
printf("apos  pos decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("apos  pre decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);









return 0;

}