#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_aleatorio()
{
	int segundos = time(0);
	srand(segundos);
	int numero_grande = rand(); 
	int numero_secreto = numero_grande % 100;

	return numero_secreto;
}

float pontos(float chute, float numero_secreto)
{
	float pontos_iniciais = 1000;

	float perdeu_ponto = abs((chute - numero_secreto)) / (double)2;
	float pontuacao = pontos_iniciais - perdeu_ponto;

	return pontuacao;
}


int main()
{
	int chute = 0;
	int venceu = 0;
	int tentativa = 1;
	int pontos_iniciais = 1000;
	int numero_secreto = num_aleatorio();

	float pontuacao = 0;

	printf("%d \n\n", numero_secreto);
	
	while(venceu == 0)
	{
		printf("Jogo da Advinhação !\n");
		printf("%d tentativa\n", tentativa);
		printf("Digite se chute ! : ");
		scanf("%d", &chute);
		if(chute < 0)
		{
			printf("Não é permitido números negativos !\n");
			continue;
		}
		int acertou = (chute == numero_secreto);
		int menor = (chute < numero_secreto);

		if(acertou)
		{
			printf("Parabéns ! Você acertou na %d tentativa\n", tentativa);
			printf("O número pensado foi %d \n", numero_secreto);
			venceu = 1;
		}
		else if(menor)
		{
			printf("O seu chute pe menor do que o numero secreto !\n");
		}
		else
		{
			printf("O seu chute é maior que o numero secreto !\n");
		}

		chute *= 1.0; // Transformo o chute em um valor de ponto fluante
		numero_secreto *= 1.0; // Transformo o numero_ secreto em um valor de ponto fluante
		// A função pontos() são aceita valores de ponto flutuante.

		pontuacao = pontos(chute, numero_secreto);

		tentativa++;
	}
}