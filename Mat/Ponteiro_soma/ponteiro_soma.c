//Escreva uma função soma que recebe um ponteiro de inteiro num e mais dois inteiros a e b. 
//A função deve calcular a soma de a+b em num.
#include <stdio.h>
#include <stdlib.h>

int soma(int* a, int* b)
{
	int num = ((*a) + (*b));
	return num;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("Ponteiro da Soma (a + b)\n");
	printf("Valor de a:  ");
	scanf("%d", &a);
	int *p = &a;
	printf("Valor de b:  ");
	scanf("%d", &b);
	int *h = &b;
	int num = soma(p, h);
	printf("Soma de %d + %d = %d \n", a, b, num);
}