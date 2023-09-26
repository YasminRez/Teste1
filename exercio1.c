#include <stdio.h>

int main() {
    int ano;
    int olim = 4;
    int copa = 4;
    // Pedir o ano de entrada
    printf("digite um ano: ");
    scanf("%d", &ano);

    if (ano < 1800 || ano > 2022) {
        printf("Ano invalido. Digite um ano entre 1800 e 2022.\n");
    } else {
        if (ano >= 1939 && ano <= 1946) {
            printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        } else {

            if ((ano - 1896) % olim == 0 || (ano - 1930) % copa == 0) {
                if ((ano - 1896) % olim == 0 && (ano - 1930) % copa == 0) {
                    printf("houve Jogos Olimpicos de Verao e Copa do Mundo no ano de %d.\n", ano);
                } else if ((ano - 1896) % olim == 0) {
                    printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
                } else {
                    printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
                }
            } else {
                printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de  %d.\n", ano);
            }
        }
    }
    return 0;
}
