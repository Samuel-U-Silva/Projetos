#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL,"portuguese");
//----------ENTRADA-------
	int num, resto_div;
	
	printf("Digite um n�mero: \n");
	scanf("%d",&num);
	
	resto_div = (num % 3);
//-------PROCESSAMENTO------
		if(resto_div == 0)  
			printf("O n�mero digitado � divis�vel por 3. \n");		
		else 
			printf("Esse n�mero n�o � divis�vel por 3. \n");	
//---------SA�DA--------
printf("Fim do Programa !");
}
