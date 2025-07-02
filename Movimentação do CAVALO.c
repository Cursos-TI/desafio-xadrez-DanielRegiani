#include <stdio.h>

int main(){

    
    int option;

        printf("Escolha um movimento do CAVALO:\n");
        printf("\n");
    do {
        printf("1. Cima Esquerda\n");
        printf("2. Cima Direita\n");
        printf("3. Baixo Esquerda\n");
        printf("4. Baixo Direita\n");
        printf("5. Esquerda Cima\n");
        printf("6. Esquerda Baixo\n");
        printf("7. Direita Cima\n");
        printf("8. Direita Baixo\n");
        printf("9. Passar rodada\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &option);
       
        switch(option) {


        case 1:
                printf("Você escolheu a opcao 1\n");
                 
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Cima\n"); // Imprime "Cima" duas vezes
           
        }
        printf("\n");
        printf("Esquerda\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
         printf("Escolha outro movimento\n");
         printf("\n");
                break;


        case 2:
                printf("Você escolheu a opcao 2\n");
                
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Direita\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
            
        case 3:
                printf("Você escolheu a opcao 3\n");
               
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Baixo\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Esquerda\n"); //imprime "DIreita" uma vez
        }
         printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
               
         case 4:
                printf("Você escolheu a opcao 4\n");
                
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Baixo\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Direita\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
                
        case 5:
                printf("Você escolheu a opcao 5\n");
               
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Esquerda\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Cima\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
                
        case 6:
                printf("Você escolheu a opcao 6\n");
                
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Esquerda\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Baixo\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
                
        case 7:
                printf("Você escolheu a opcao 7\n");
               
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Direita\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Cima\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
                
        case 8:
                printf("Você escolheu a opcao 8\n");
                
    {
        for(int i = 1; i <= 2; i++)
        {
            printf("\n");
           printf("Direita\n"); // Imprime "Cima" duas vezes
        }
        printf("\n");
        printf("Baixo\n"); //imprime "DIreita" uma vez
        }
        printf("\n");
        printf("Escolha outro movimento\n");
        printf("\n");
                break;
                
        case 9:
        printf("\n");
                printf("Voce nao jogou, passando a rodada...\n");
                printf("\n");
                break;

            default:
                printf("Opcao invalida!\n");
                printf("\n");
        }
    } while (option != 9);


    return 0;
}