#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
//-------ENTRADA------
	int num1,num2;
	printf("Digite um número: \n");
	 scanf("%d",&num1);
	printf("Digite um número: \n");
	 scanf("%d", &num2);
//-------PROCESSAMENTO---
	if(num1 > num2) {
		printf("O número %d é maior que %d \n",num1,num2);
		printf("A diferença entre %d e %d é %d.\n", num1,num2,(num1-num2));
	} else {
		printf("O número %d é menor que %d. \n", num1,num2);
		printf("A diferença entre %d e %d é %d.\n", num1,num2,(num1-num2));
	}
//-------SAÍDA-------
	printf("Fim do Programa !");
}
