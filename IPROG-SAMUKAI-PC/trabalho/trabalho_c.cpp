/*
QUESTÃO 01
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	float N = 0, K = 1;
	setlocale(LC_ALL, "");
	printf("-----------------------\n");
	printf("> Raiz Quadrada\n");
	printf("-----------------------\n");
	printf("Insira uma valor: ");
	scanf("%f", &N);
	printf("> Raiz de %f = %.2f", N, sqrt(N)); // Confirma o valor da  raiz quadrada
	printf("\n> Os valores abaixo estão se aproximando cada vez mais da raíz quadrada de %f\n", N);
	for(int cont = 0; cont <= 12; cont++)
	{
		K = (K + N/K)/2 * 1.0;
		printf("%f\n", K);
	}
}
