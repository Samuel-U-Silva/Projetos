#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "portuguese");
//------ENTRADA----------
	int num, resto_3, resto_5;
	
	printf("Digite um n�mero: \n");
	 scanf("%d",&num);

	 resto_3 = num % 3;
	 resto_5 = num % 5;
//-------PROCESSAMENTO-----
	if(resto_3 == 0 || resto_5 == 0)
		if(resto_3 == 0)
			 printf("Esse n�mero � divis�vel por 3. \n");
		else 
			printf("Esse n�mero � divis�vel por 5. \n"); 
	else		
	    printf("Esse n�mero n�o divis�vel nem por 3 e nem por 5. \n"); 
//---------SA�DA-------
	printf("Fim do Programa !");
}
