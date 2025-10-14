#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
       
        printf("\nCalculadora Básica\n");
        printf("Escolha uma operacao:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        getchar(); 

       
        printf("Opcao escolhida: %d\n", opcao);

        if (opcao == 0) {
            printf("Saindo da calculadora...\n");
            break; 
        }

        
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        getchar(); 
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        getchar(); 

        
        printf("Numeros lidos: %.2f e %.2f\n", num1, num2);

        
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro! Divisao por zero.\n");
                }
                break;
            
            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}