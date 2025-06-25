#include <stdio.h>

int main(){
    int opcao;
    int i = 1;


    do {
        printf("Escolha uma das PECAS:\n");
        printf("1. TORRE\n");
        printf("2. BISPO\n");
        printf("3. RAINHA\n");
        printf("4. Sair do jogo...\n");
        scanf("%d", &opcao);
       
        switch(opcao) {
            case 1:
                printf("Voce escolheu a TORRE\n");
                for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
                break;
            case 2:
                printf("Voce escolheu a BISPO\n");
                while (i <= 2)
                {
                   printf("Cima, Direita \n");
                   i++;
                }
                
                break;
                case 3:
                printf("Voce escolheu a RAINHA\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("Esquerda\n");
                }
                
                break;
            case 4:
                printf("Saindo do Jogo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);



    return 0;
}
