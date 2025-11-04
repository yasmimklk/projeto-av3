
#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero para calcular a tabuada: ");
        scanf("%d", &numero);

        printf("Tabuada do %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        char continuar;
        printf("Deseja calcular outra tabuada? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar == 'n' || continuar == 'N') {
            break; 
        }

    } while (1); 

    return 0;
}
