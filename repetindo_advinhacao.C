#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int chute = 0;
	int venceu = 0;
	int tentativa = 1;
	float pontuacao;
	int pontos_iniciais = 1000;
	float perdeu_ponto;
	//----------------------------
	int segundos = time(0);
	srand(segundos);
	int numero_grande = rand(); 
	int numero_secreto = numero_grande % 100;
	//----------------------------
	while(venceu == 0)
	{
		printf("Jogo da Advinhação !\n");
		printf("tentativa %d\n", tentativa);
		printf("Digite se chute ! : ");
		scanf("%d", &chute);
		if(chute < 0)
		{
			printf("Não é permitido números negativos !\n");
			continue;
		}
		if(chute == numero_secreto)
		{
			printf("Parabéns ! Você acertou na tentativa %d\n", tentativa);
			printf("O número pensado foi %d\n", numero_secreto);
			venceu = 1;
		}
		else if(chute < numero_secreto)
		{
			printf("O seu chute pe menor do que o numero secreto !\n");
		}
		else
		{
			printf("O seu chute é maior que o numero secreto !\n");
		}
		perdeu_ponto = abs((chute - numero_secreto)) / (double)2;
		pontuacao = pontos_iniciais - perdeu_ponto;
		tentativa++;
	}
}