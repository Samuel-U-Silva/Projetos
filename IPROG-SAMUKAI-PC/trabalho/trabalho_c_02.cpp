/*

02 . A conjectura de Goldbach foi apresentada por Christian Goldbach em uma carta a Leonhard Euler no ano de 1742, e diz:
Todo número par maior do que dois pode ser representado pela soma de dois números primos.
Apesar de não ter sido provada até hoje, a conjectura funcionou para todos os casos que foram experimentados. 
Faça um programa que lê um valor N (inteiro, par e maior que dois) e exibe os dois valores primos em que N pode ser decomposto.

*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	int primo1 = 0, primo2 = 0, N = 0, q = 0;
	setlocale(LC_ALL, "");
	printf("----------------------\n");
	printf("Conjectura de Goldbach\n");
	printf("-----------------------\n");
	printf("> Insira um valor inteiro par e maior que 2: ");
	scanf("%d", &N);
	//
	q = N;
	int a =1;
	if(q > 2 && q % 2 == 0)
	{
		for(int cont = 1; cont < q; cont++)
		{
			if(q % cont == 0)
			{
				primo1 = cont; // ERRAD0 !
				primo2 = cont; // ERRAD0 !
			}		
		}
		printf("> Primos encontrados: \n");
		printf("%d\n%d\n", primo1, primo2);
		if((primo1 + primo2) == q)
			printf("> A soma dos numeros primos %d + %d = %d\n", primo1, primo2, q);
		printf("FIM !");
	}
	else
	{
		printf("\nInsira um valor inteiro par e maior que 2 !\n");
		printf("FIM !");
	}	
}
