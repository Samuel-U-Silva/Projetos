/*
Escreva uma função soma(int numeros[10]) que receba um array de inteiros
 e imprime a soma de todos os elementos dentro desse array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int array_soma[], int n)
{
	int soma = 0;

	for (int i = 0; i < n; ++i)
	{
		soma += array_soma[i];
	}
	return soma;
}

int main()
{
	int soma_total = 0;
	int qtd_numeros = 0;

	printf("Quanto número você deseja somar ? \n");
	scanf("%d", &qtd_numeros);

	int array_soma[qtd_numeros];
	
	for (int i = 0; i < qtd_numeros; ++i)
	{
		printf("Insira %d° número > ", i+1);
		scanf("%d", &array_soma[i]);
		
	}
	soma_total = soma(array_soma, qtd_numeros);
	printf("\n");
	printf("A soma de %d elementos = %d \n", qtd_numeros, soma_total);
}