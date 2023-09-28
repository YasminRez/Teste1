#include <stdio.h>
int main(){

    long int A, B, maior, menor;

    scanf("%d %d", &A, &B);

    if(A == B){
        printf("Os valores lidos sao iguais\n");
        } else {
        if(A > B && A != 0 && A % B == 0){
    printf("%d eh maior que %d\n", A, B);
    printf("%d eh multiplo de %d\n", A, B);
    
    }else if(A < B && B != 0 && B % A == 0){
        printf("%d eh maior que %d\n", B, A);
        printf("%d eh multiplo de %d\n", B, A);
    } else if(A > B && A != 0 && A % B != 0){
        printf("%d eh maior que %d\n", A, B);
        printf("%d nao eh multiplo de %d\n", A, B);
    } else if (A < B && B != 0 && B % A != 0){
        printf("%d eh maior que %d\n", B, A);
        printf("%d nao eh multiplo de %d\n", B, A);
    }
}
        
    return 0;
}
