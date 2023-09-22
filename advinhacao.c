#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //-------------------------------------
    int segundos = time(0); // vai gerar um número
    srand(segundos); // vai pegar esse número e jogar na função rand
    int numero_grande = rand(); // 
    int numero_secreto =  numero_grande % 100; // o número secreto será o resto da divisão do númerado gerado por rand por 100 
    //printf("%d\n", numero_secreto);
    //-------------------------------------------
    int chute = 0; // O que o jogador irá digitar
    int tentativa = 1;
    int pontos_inciais = 1000;
    int acertou = 0;
    //----------------------------------------
    double pontos_perdidos;
    double pontuacao = 1000;
    //-------------------------------------
    int nivel = 0;
    int numero_tentativas = 0;
    printf("\n\n");
                            
    printf("\t\t\t\t\t\t|__ \\  \n");
    printf("\t\t\t\t\t\t   ) |  \n");
    printf("\t\t\t\t\t\t  / /   \n");
    printf("\t\t\t\t\t\t |_|    \n"); 
    printf("\t\t\t\t\t\t (_)    \n");  

    printf("\t\t\t╔════════════════════════════════════════════╗ \n");
    printf("\t\t\t* Sejam Bem - Vindos ao Jogo da Adivinhação !* \n");
    printf("\t\t\t╚════════════════════════════════════════════╝ \n");
    
    printf("\n\n");
    /*
    printf("\t\t\t\t\t\t|__ \\  \n");
    printf("\t\t\t\t\t\t   ) |  \n");
    printf("\t\t\t\t\t\t  / /   \n");
    printf("\t\t\t\t\t\t |_|    \n"); 
    printf("\t\t\t\t\t\t (_)    \n");
    */
    ///*
    printf("\t\t\t\t\t    //\\    _        \n"); 
    printf("\t\t\t\t\t   |/_\\|  (_)       \n");
    printf("\t\t\t\t\t    / \\   | |       \n");
    printf("\t\t\t\t\t   / _ \\ / /        \n");
    printf("\t\t\t\t\t  / ___ \\ (__       \n");
    printf("\t\t\t\t\t /_/   \\_\\___|     \n");
    //*/
    printf("╔══════════════════════════════════════════════════════════════════════════════╗  \n");
    printf(" Escolha seu nível de dificuldade\n(1) Fácil :) (2) Médio ;-; (3) Difícil :/\n >>>  ");
        scanf("%d", &nivel);
    printf("╚══════════════════════════════════════════════════════════════════════════════╝  \n");
    //
    switch(nivel)
    {
        case 1  : numero_tentativas = 20; break;
        case 2  : numero_tentativas = 15; break;
        default : numero_tentativas = 6;
    }
    for(int i = 1; i < numero_tentativas; i++)
    {
        printf("%d° Tentativa \n", tentativa);
        printf("Digite seu chute!: ");
        scanf("%d", &chute);
        printf("==========================================\n");
        //
        if(chute < 0)
        {
            printf("Você não pode chutar números negativos !\n");
            continue; // Ele para de executar o loop e depois reinicia ele
        }
        int maior = (chute > numero_secreto);
        acertou = (chute == numero_secreto);
        //
        if (acertou)
        {
            break;
        }
        else if (maior)
        {
            printf("O seu chute é maior do que o número secreto ! \n\n");
        }
        else
        {
            printf("O seu chute é menor do que o número secreto ! \n\n");
        }
        pontos_perdidos = abs((numero_secreto - chute)) / 2.0;
        pontuacao = (pontos_inciais - pontos_perdidos);
        tentativa++;
    }
    if (acertou)
    {
        printf("=========================================================\n\n");
        printf("Parabéns ! Você Acertou ! Você é um ótimo jogador !\n");
        printf("O número pensado foi %d\n", numero_secreto);
        printf("Sua pontuação = %.2f pontos\n\n", pontuacao);
        printf("=========================================================\n\n");
    }
    else
    {
        printf("=========================================================\n\n");
        printf("Você perdeu :( Tente novamente !\n");
        printf("O número pensado foi %d\n\n", numero_secreto);
        printf("=========================================================\n\n");
    }
        printf("***************\n");
        printf("Fim de Jogo !  \n");
        printf("***************\n");
    return 0;
}