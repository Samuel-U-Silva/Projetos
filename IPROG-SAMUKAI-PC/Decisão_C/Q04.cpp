#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
//-------ENTRADA------
	int num1,num2;
	printf("Digite um n�mero: \n");
	 scanf("%d",&num1);
	printf("Digite um n�mero: \n");
	 scanf("%d", &num2);
//-------PROCESSAMENTO---
	if(num1 > num2) {
		printf("O n�mero %d � maior que %d \n",num1,num2);
		printf("A diferen�a entre %d e %d � %d.\n", num1,num2,(num1-num2));
	} else {
		printf("O n�mero %d � menor que %d. \n", num1,num2);
		printf("A diferen�a entre %d e %d � %d.\n", num1,num2,(num1-num2));
	}
//-------SA�DA-------
	printf("Fim do Programa !");
}
