#include <stdio.h>

void main(){
    int num;
    printf(" entre com o numero inteiro:");
    scanf("%d", &num);

    num = num + num%3;
    printf("NUm: %d", num);

    return 0;


}
