#include <stdio.h>
int main(){
char funcionario;
double salario, p1, p2, p3;

scanf("%c", &funcionario);
scanf("%lf", &salario);

p1 = (salario * 5.0) / 100;
p2 = (salario * 7.0) / 100;
p3 = (salario * 8.0) / 100;

 if(funcionario == 'a'){
printf("R$ %.2lf\n", salario + p1);
 } else if(funcionario == 'b'){
    printf("R$ %.2lf\n", salario + p2);
 } else if(funcionario == 'c'){
    printf("R$ %.2lf\n", salario + p3);
 } else {
    printf("opcao invalida\n");
 }

 



 return 0;
}
