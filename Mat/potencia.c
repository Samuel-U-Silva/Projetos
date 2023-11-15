#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void welcome()
{
	printf("=================================================================\n");
	printf("\t\t # SEJAM BEM - VINDOS AO APP DA POTENCIA !! # 				  \n");
	printf("================================================================\n\n");
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
 

int main()
{
	int base;
	int expoente;

	welcome();

	printf("Insira base: ");
	scanf("%d", &base);
	printf("Insira o expoente: ");
	scanf("%d", &expoente);
	
	int indeterdimancao = (base == 0 && expoente == 0);
	
	while(indeterdimancao)
	{
		printf(" # Indeterminação ! #\n\n");
		printf("Insira base: ");
		scanf("%d", &base);
		printf("Insira o expoente: ");
		scanf("%d", &expoente);
		continue;
	}
	int resultado = potencia(base, expoente);
	printf("%d elevado %d = %d", base, expoente, resultado);
}