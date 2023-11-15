/*Escreva um programa que peça um inteiro ao usuário, 
e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10. 
Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>    

int test_0(int numero);
int tabuada(int numero, int opcao);
int potencia(int base, int expoente);

int main()
{
	printf("\n\n");
	printf("=======================\n");
	printf("*** TABUADA ***\n");
	printf("=======================\n");
	int numero = 0;
	int opcao = 0;
	printf("\n\n");
	printf("#--------------------#\nEscolha uma das opções !\n#--------------------#\n(1) Multiplicação\t (2) Resto\t (3) Dvisão\t (4)Potenciação\n Escolha uma opção >>> ");
	scanf("%d", &opcao);
	printf("\n\n");
	if(opcao > 0 && opcao < 5)
	{
		if(opcao == 4)
		{
			int base;
			int expoente;
			printf("> Insira base: ");
			scanf("%d", &base);
			printf("> Insira o expoente: ");
			scanf("%d", &expoente);
				
			int resultado = potencia(base, expoente);
			printf("#=============\nResultado\n=============#\n %d elevado %d = %d\n\n", base, expoente, resultado);
			printf("### FIM ! ###\n\n");
		}
		else
		{
			printf("Digite um número >>> \n");
			scanf("%d", &numero);
			if(numero < 0)
			{ 
				 int a = numero;
				 int teste_ok = test_0(a);
				 int result = tabuada(teste_ok, opcao);
				 printf("%d\n\n", result);
				 printf("### FIM ! ###\n\n");
			}
			else
			{
				int resultado = tabuada(numero, opcao);
			 	printf("%d\n\n", resultado);
			 	printf("### FIM ! ###\n");	
			}	
		} 
	}
	else
	{
		printf("Você digitou um valor inválido !\n");
		printf("### FIM ! ###\n\n");
	}
}


int test_0(int numero)
{
	while(numero < 0)
	{
		printf("Não é permitido número negativos !\n\n");
		printf("Digite novamente >>> \n");
		printf(">>> ");
		scanf("%d", &numero);
		continue;
	}
	return numero;
}

int tabuada(int numero, int opcao)
{
	if(opcao == 1) // Multiplicação 
	{
		printf("*** TABUADA do número %d ***\n", numero);
		for(int i = 1; i <= 10; i++)
		{
			printf("%d x %d = %d\n", numero, i, (numero * i));
		}
	}else if(opcao == 2) // resto
	{
		printf("*** TABUADA - Resto do número %d ***\n", numero);
		for(int i = 1; i <= 10; i++)
		{
			printf("%d %% %d = %d\n", numero, i, (numero % i));
		}
	}
	else if(opcao == 3)
	{
		printf("*** TABUADA da divisão do número %d ***\n", numero);
		for(int i = 1; i <= 10; i++)
		{
			float divisao = (numero / (i * 1.0));
			printf("%d ➗ %d = %.2f\n", numero, i, divisao);
		}
	}
	else 
	{
		return 0;
	}
}


int potencia(int base, int expoente)
{
	int resultado = 1;
	if(base == 0 && expoente == 0)
	{
		printf(" # Indeterminação ! #\n");	
	}
	else if(expoente == 0)
	{
		resultado = 1;
		return resultado;
	}
	else
	{
		for(int i = 1; i <= expoente; i++)
		{
			resultado = (resultado * base);	
		}
		return resultado;	
	}
}