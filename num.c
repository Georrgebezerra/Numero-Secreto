#include <stdio.h>

int main() {
    const int NUMERO_SECRETO = 42; // Número predefinido por você
    int palpite;                   // Palpite do usuário
    int tentativas = 0;            // Contador de tentativas
    int op;

    printf("=== Jogo do Numero Surpresa ===\n");
    printf("Tente adivinhar o numero secreto entre 1 e 50!\n");

    do {
        printf("\n1 - Jogar\n");
        printf("2 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1: // Jogar
                tentativas = 0; // Reseta as tentativas para um novo jogo
                printf("Digite seu palpite: ");
                scanf("%d", &palpite);
                tentativas++;

                while (palpite != NUMERO_SECRETO) {
                    if (palpite < 1 || palpite > 50) {
                        printf("Por favor, digite um numero entre 1 e 50!\n");
                    } else if (palpite < NUMERO_SECRETO) {
                        printf("O numero secreto e MAIOR que %d. Tente novamente: ", palpite);
                    } else {
                        printf("O numero secreto e MENOR que %d. Tente novamente: ", palpite);
                    }
                    scanf("%d", &palpite);
                    tentativas++;
                }

                // Se sair do while, o usuário acertou
                printf("\nParabens! Voce acertou o numero %d em %d tentativas!\n", NUMERO_SECRETO, tentativas);
                break;

            case 2: // Sair
                printf("Obrigado por jogar! Ate a proxima!\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1 ou 2.\n");
        }
    } while (op != 2);

    return 0;
}
