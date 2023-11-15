#include <stdio.h>
#include <stdlib.h>
#include <time.h>
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////   FUNÇÕES  ///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
void welcome()
{   
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
    printf("\t\t\t\t\t    //\\    _        \n"); 
    printf("\t\t\t\t\t   |/_\\|  (_)       \n");
    printf("\t\t\t\t\t    / \\   | |       \n");
    printf("\t\t\t\t\t   / _ \\ / /        \n");
    printf("\t\t\t\t\t  / ___ \\ (__       \n");
    printf("\t\t\t\t\t /_/   \\_\\___|     \n");
}
////////////////////////////////////////////////////////////////////////////////////////////
void level()
{
    printf("╔══════════════════════════════════════════════════════════════════════════════╗\n");
    printf(" Escolha seu nível de dificuldade\n(1) Fácil :) (2) Médio ;-; (3) Difícil :/\n    ");
    printf("╚══════════════════════════════════════════════════════════════════════════════╝\n");

}
//////////////////////////////////////////////////////////////////////////////////////////////    
int num_aleatorio()
{
    int segundos = time(0); // vai gerar um número
    srand(segundos); // vai pegar esse número e jogar na função rand
    int numero_grande = rand(); //
    int numero_secreto = numero_grande % 100; // o número secreto será o resto da divisão do númerado gerado por rand por 100 

    return numero_secreto;
}
////////////////////////////////////////////////////////////////////////////////////////
float pontos(float chute, float numero_secreto)
{
    float pontos_iniciais = 1000;
    float perdeu_ponto = abs((chute - numero_secreto)) / (double)2;
    float pontuacao = pontos_iniciais - perdeu_ponto;

    return pontuacao;
}
////////////////////////////////////////////////////////////////////////////////////
void end()
{
    printf("***************\n");
    printf("Fim de Jogo !  \n");
    printf("***************\n");
}
//////////////////////////////////////////////////////////////////////////////////
void p_win(int numero_secreto, float pontuacao)
{
        printf("\t=========================================================\n\n");
        printf("\tParabéns ! Você Acertou ! Você é um ótimo jogador !\n");
        printf("\tO número pensado foi %d\n", numero_secreto);
        printf("\tSua pontuação = %.2f pontos\n\n", pontuacao);
        printf("\t=========================================================\n\n");
}
//////////////////////////////////////////////////////////////////////////////////////
void p_game_over(int numero_secreto)
{
        printf("\n\n\n");
        printf("\t=========================================================\n\n");
        printf("\tVocê perdeu :( Tente novamente !\n");
        printf("\tO número pensado foi %d\n\n", numero_secreto);
        printf("\t=========================================================\n\n");
}
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////!!! O PROGRAMA COMEÇA AQUI !!!!!////////////////////////////////////////////////////////
/////////////////////////////////////////////////////
///////////////////////////////////////////
///////////////////////////////
//////////////
int main()
{
/////////////////////////////////////////////////////////////////////
////////////////////// VARIÁVEIS ///////////////////////////////////
///////////////////////////////////////////////////////////////////
    int numero_secreto =  num_aleatorio(); 
    //printf("%d\n", numero_secreto); // REVELA O NUMERO SECRETO
    int chute = 0; // O que o jogador irá digitar
    int pontos_inciais = 1000;
    int acertou;
    int maior;
    int nivel = 0;
    int numero_tentativas = 0;
///////////////////  
    welcome();
    
    level(); 

    printf(">   ");
    scanf("%d", &nivel);
    
    while(nivel > 3)
    {
            printf("Você digitou uma opção inválida !\n");
            printf(">   ");
            scanf("%d", &nivel);
    }
       switch(nivel)
        {
            case 1  : numero_tentativas = 20; break;
            case 2  : numero_tentativas = 15; break;
            default  : numero_tentativas = 6;
        }
//////////////////////////////////////////////////
    for(int i = 0; i < numero_tentativas; i++)
    {
        printf("\t==========================================\n");
        printf("\tVocê tem %d Tentativas !\n\n", numero_tentativas);
        printf("\t %d° Tentativa \n", i+1);
        printf("\t Digite seu chute!: ");
        scanf("%d", &chute);
        printf("\t==========================================\n");
        /////////////////////////////////////////
        if(chute < 0)
        {
            printf("Você não pode chutar números negativos !\n");
            continue; // Ele para de executar o loop e depois reinicia ele
        }
        maior = (chute > numero_secreto);
        acertou = (chute == numero_secreto);
        ///////////////////////////////////////
        if (acertou)
        {
            p_win(numero_secreto, pontuacao); // Você acertou !
            break;
        }
        else if (maior)
        {
            //printf("\n\n");
            printf("\tO seu chute é maior do que o número secreto ! \n\n");
        }
        else
        {
            printf("\tO seu chute é menor do que o número secreto ! \n\n");
        }
        chute *= 1.0;
        numero_secreto *= 1.0;
        float pontuacao = pontos(chute, numero_secreto);
    }
    ///////////////////////////////////////
    p_game_over(numero_secreto); // Você perdeu
    ///////////////////////////////////////
    end(); // FIM
}