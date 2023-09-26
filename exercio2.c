#include <stdio.h>

int main() {
    long int numero;
     printf("digite um numero entre 0 e 1 bilhao: \n");
     scanf("%d", &numero);

     if(numero <0 || numero > 1000000000){
        printf("invalido insira um número entre 0 e 1000000000.\n"); 
       
     } else if(numero % 2 == 0) {
        printf("%d eh par.\n", numero);
     } else if (numero % 2 != 0){
            printf("%d eh impar.\n", numero);
        }
     
     long int numero2 = numero;
     long int soma = 0;
       
       while(numero2 > 0){
        soma += numero2% 10;
        numero2 /= 10;
       } 
       printf("A soma dos algarismo %d eh igual %d.\n", numero, soma);

    return 0;
}
