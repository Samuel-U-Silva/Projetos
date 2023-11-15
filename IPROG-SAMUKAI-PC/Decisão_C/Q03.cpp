#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL,"portuguese");
//----------ENTRADA-------
	int num, resto_div;
	
	printf("Digite um número: \n");
	scanf("%d",&num);
	
	resto_div = (num % 3);
//-------PROCESSAMENTO------
		if(resto_div == 0)  
			printf("O número digitado é divisível por 3. \n");		
		else 
			printf("Esse número não é divisível por 3. \n");	
//---------SAÍDA--------
printf("Fim do Programa !");
}
