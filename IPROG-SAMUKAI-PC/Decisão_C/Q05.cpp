#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
//----------ENTRADA-----------------
	float n1,n2,medA;
//----------------------------------
	printf("Digite sua 1° nota: \n");
	 scanf("%f",&n1);
	  fflush(stdin); //Limpar Buffer do Teclado.
	printf("Digite sua 2° nota: \n");
	 scanf("%f",&n2);
//--------PROCESSAMENTO--------------------
	medA = (n1+n2)/2.0;
//-----------------------------------------
	if(medA>= 0 && medA<=10)
		printf("Nota Válidada ! Sua média é %2.2f \n",medA);
	else
		printf("Nota Inválida ! \n");
//--------SAÍDA----------------------
	printf("Fim do Programa !");
}
