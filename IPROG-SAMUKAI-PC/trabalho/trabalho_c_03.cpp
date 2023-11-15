/*

03.Faça um programa que calcule o valor aproximado de cos(x), dado pela aproximação abaixo:
		cos(x) = 1 - x2 + x4 - x6 + ...
                    2!   4!   6!
	

Faça a soma com 3 termos e verifique o resultado correto, usando a função cos(..) da biblioteca math.h
Se o erro for muito grande, isto é, a diferença entre o seu resultado e o da função for muito elevada, experimente recalcular a aproximação com mais termos.

*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	double cos = 0;
	double fatorial = 1;
	float x = 0;
	int limite = 0;
	setlocale(LC_ALL, "");
	printf("-----------------------\n");
	printf("Função Cos(x)\n");
	printf("-----------------------\n");
	printf("Digite um valor para X: ");
	scanf("%f", &x);
	printf("Digite um limite para calcular o Cosseno");
	scanf("%d", &limite);
	printf("\nCALCULAND O COS(%f).....\n", x);
	//
	for(int f = 2; f <= limite; f+=2)
	{
		fatorial = fatorial * (f-1);
		//fatorial = fatorial + 2;  
		for(int expo = 2; expo <= limite; expo+=2)
		{
			cos = 1 - pow(x,expo)/fatorial * 1.0;	
		}	
	}
	printf("fatorial = %f\n", fatorial);
	printf("\nCOS(%f) = %.2f", x, cos);	
}
