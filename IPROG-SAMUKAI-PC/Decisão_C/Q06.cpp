#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"portuguese");
//-------ENTRADA-------
	float h, peso_H, peso_M; // h é altura.
	int sexo;
	printf("Insira seu sexo <-> 1 para Mulheres e 2 para Homens. \n");
	 scanf("%d",&sexo);
	 fflush(stdin);
//------PROCESSAMENTO-------
	peso_M = (62.1 * h) - 44.7;
	peso_H = (72.7 * h) - 58.0;
//--------------------------
	if(sexo == 1 || sexo == 2) {
		printf("Digite sua altura: \n");
	 	scanf("%f",&h);
	 	
	 	if(sexo == 2) { 
			printf("Homens - Seu peso ideal é: %.2f Kg \n \n",peso_H);
			printf("Fim do Programa !"); 
		}
		else {
			printf("Mulheres - Seu peso ideal é: %.2f Kg \n \n",peso_M);
			printf("Fim do Programa !");
		}
	} else 
		printf("O programa não pode ser executado :c \n"); 
	fflush(stdin);
	
//------SAÍDA-----------
	
}
