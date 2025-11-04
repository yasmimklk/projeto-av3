#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, palpite;
    char jogarNovamente;

   
    srand(time(0));

    do {
        
        numero = rand() % 100 + 1;

        printf("Bem-vindo ao Jogo de Adivinhacao!\n");
        printf("Tente adivinhar o numero entre 1 e 100.\n");

        do {
            printf("Digite o seu palpite: ");
            scanf("%d", &palpite);

            if (palpite > numero) {
                printf("Muito alto! Tente novamente.\n");
            } else if (palpite < numero) {
                printf("Muito baixo! Tente novamente.\n");
            } else {
                printf("Parabens! Voce acertou o numero.\n");
            }
        } while (palpite != numero); 

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente);

    } while (jogarNovamente == 's' || jogarNovamente == 'S'); 

    printf("Obrigado por jogar!\n");

    return 0;
}
