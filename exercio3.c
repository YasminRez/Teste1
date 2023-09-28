#include <stdio.h>
int main() {
     int senha = 0;
     int entrada;
     
     scanf("%d", &senha);
    
        printf("senha cadastrada: %d\n", senha);
   
     // dentro do "do "compara entrada e senha enquanto for diferente vai ficar repetindo e quando for = vai quebrar o ciclo
     do{
        scanf("%d", &entrada);
        if(entrada != senha){
        printf("senha invalida!\n");
        } else if(entrada == senha){
          printf("senha valida!\n");
          break;
        }
     }while(entrada != senha);
       
        

    return 0;
}
