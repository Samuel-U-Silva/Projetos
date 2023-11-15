/*Escreva um programa que peça um inteiro ao usuário, 
e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10. 
Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>    

int potencia(int base, int expoente)
{
	int resultado = pow(base, expoente);
	return resultado;
}
int main()
{
	printf("---------------\n");
	printf("*** TABUADA ***\n");
	printf("---------------\n");
	int numero = 0;
	int opcao = 0;
	printf("1) Multiplicação 2) Resto 3) Dvisão 4) Potenciação\n >>> ");
	scanf("%d", &opcao);
	printf("Qual é a tabuada que você quer ?\n");
	scanf("%d", &numero);
	while(numero < 0)
	{
		printf("Não é permitido número negativos !\n\n");
		printf("Qual é a tabuada que você quer ?\n");
		printf(">>> ");
		scanf("%d", &numero);
		continue;
	}if(opcao == 1)
	{
		printf("*** TABUADA do %d ***\n", numero);
		for(int i = 1; i <= 10; ++i)
		{
			printf("%d x %d = %d\n", numero, i, (numero * i));
		}	
	}
	else if(opcao == 2)

	{
		printf("*** TABUADA do resto do número %d ***\n", numero);
		for(int i = 1; i <= 10; ++i)
		{
			printf("%d %% %d = %d\n", numero, i, (numero % i));
		}
	}
	else if(opcao == 4)
	{
		int expoente;
		printf("Qual é a potencia que você deseja elevar o número ? \n");
		printf(">>> ");
		scanf("%d", &expoente);
			printf("*** TABUADA da potencia %d ***\n", numero);
		for(int i = 1; i <= 10; ++i)
		{
			printf("%d elevado %d = %d\n", numero, i, resultado);
		}
	}
	else
	{
			printf("*** TABUADA da divisão do número %d ***\n", numero);
		for(int i = 1; i <= 10; ++i)
		{
			printf("%d ➗ %d = %.2f\n", numero, i, (numero / (double)i));
		}
	}
	printf("\nFIM !\n");
}