#include <stdio.h>

int main() {
    long int numero;

     scanf("%d", &numero);

     
       if(numero % 2 == 0) {
        printf("%d eh par\n", numero);
     } else if (numero % 2 != 0){
            printf("%d eh impar\n", numero);
        }
     
     long int numero2 = numero;
     long int soma = 0;
       
       while(numero2 > 0){
        soma += numero2% 10;
        numero2 /= 10;
       } 
       printf("A soma dos algarismo %d eh igual %d\n", numero, soma);

    return 0;
}
