#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguse");
	//
	float IMC, peso, h; // h é altura
	//
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	fflush(stdin);
	printf("Digite sua altura: \n");
	scanf("%f",&h);
	fflush(stdin);
	//
	IMC = peso/pow(h,2);
	//
	if(IMC >= 18.5) {
		if(IMC >= 18.6 && IMC <= 24.9)
			printf("Saudável");
		else
		if(IMC >= 25.0 && IMC <= 29.9)
			printf("Peso em Excesso");
		else
		if(IMC >= 30.0 && IMC <= 34.9)
			printf("Obesidade Grau I");
		else
		if(IMC >= 35.0 && IMC <= 29.9)
			printf("Obesidade Grau II - Severa");
		else
		if(IMC >= 40.0)
			printf("Obesidade Grau III - Mórbida");
	}
	else
		printf("Abaixo do peso");
}
