#include <stdio.h>
#include <stdlib.h>
/*Escreva a mesma função de potencia que você fez na aula anterior,
só que dessa vez, o resultado deve ser salvo em um inteiro que vem na lista de parâmetros da função.
Para isso, claro, você precisará receber um ponteiro de inteiro:
*/

int potencia(int* base, int* expoente)
{
	int result = 1;
	for (int i = 1; i <= (*expoente); ++i)
	{
		result *= (*base);
	}
	return result;
}
int main()
{
	int base;
	int expoente;
	int resultado;
	scanf("%d", &base);
	scanf("%d", &expoente);
	resultado = potencia(&base, &expoente);
	printf("%d ^ %d = %d \n", base, expoente, resultado);
}