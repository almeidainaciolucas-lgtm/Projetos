#include <stdio.h>

int main(){

    int idade;
    float renda;
    int dependentes;

    printf("entre com sua idade: \n");
    scanf("%d", &idade);

    printf("entre com sua renda: \n");
    scanf("%f", &renda);

    printf("entre com sua dependentes: \n");
    scanf("%d", &dependentes);

    //if(idade<= 18 || idade >=60)
    //{
      //  if (renda < 2000)
    //{
        //printf("Você tem direito ao desconto!\n");
    //}else{
      //  printf("Você não tem direito ao desconto divido á renda!\n");
    //}
    
      //  printf("Aceito com relação a idade!\n");
    //}else{
      //  printf("Você não atende os critérios devido à idade!\n");
    //}
    
    if(idade >= 18 && idade < 65)
    { if(renda < 2000)
     { if(dependentes > 3){
        printf("você atende a todos os requisitos!\n");
     }else{
        printf("Você não atende ao critério dependentes!\n");
     }
    }else{
        printf("Você não atende ao critério renda!\n");
    }
     // condição verdadeira   
    }else{
        printf("Você não atende ao critério idade!\n");
    }











return 0;

}
