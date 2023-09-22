/*Escreva um programa que peça um inteiro ao usuário, 
e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10. 
Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.*/

#include <stdio.h>

int main()
{
	printf("---------------\n");
	printf("*** TABUADA ***\n");
	printf("---------------\n");
	int numero = 0;
	printf("Qual é a tabuada que você quer ?\n");
	scanf("%d", &numero);
	while(numero < 0)
	{
		printf("Não é permitido número negativos !\n\n");
		printf("Qual é a tabuada que você quer ?\n");
		scanf("%d", &numero);
		continue;
	}
	printf("*** TABUADA do %d ***\n", numero);
	for(int i = 1; i <= 10; ++i)
	{
		printf("%d x %d = %d\n", numero, i, (numero * i));
	}
	printf("\nFIM !\n");
}