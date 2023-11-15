#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "portuguese");
//------ENTRADA----------
	int num, resto_3, resto_5;
	
	printf("Digite um número: \n");
	 scanf("%d",&num);

	 resto_3 = num % 3;
	 resto_5 = num % 5;
//-------PROCESSAMENTO-----
	if(resto_3 == 0 || resto_5 == 0)
		if(resto_3 == 0)
			 printf("Esse número é divisível por 3. \n");
		else 
			printf("Esse número é divisível por 5. \n"); 
	else		
	    printf("Esse número não divisível nem por 3 e nem por 5. \n"); 
//---------SAÍDA-------
	printf("Fim do Programa !");
}
