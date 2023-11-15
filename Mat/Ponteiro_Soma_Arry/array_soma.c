/*
Escreva uma função soma que recebe um array de inteiros e o tamanho do array, e retorna a soma dos números desse array.
*/
#include <stdio.h>
#include <stdlib.h>

int array_soma(int* n, int v[])
{
	printf("Digite %d números \n", (*n));
	int soma = 0;
	int num = 0;
	for (int i = 0; i <= ((*n) - 1); ++i)
	{
		printf("%d° número:   ", i+1);
		scanf("%d", &num);
		v[i] = num;
		soma = soma + v[i];
	}
	return soma;
}
int main()
{
	int n = 0;
	printf("Quanto número você deseja somar ? >   ");
	scanf("%d", &n);
	int v_inteiros[n];
	int resultado = array_soma(&n, v_inteiros);
	printf("A soma total = %d \n", resultado);
}