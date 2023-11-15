#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()

{
	setlocale(LC_ALL,"portuguese");
	//
	int x, y, z, ma, mp, geo, har;
	char opcao;
	//
	printf("===================================================== \n");
	printf("A - M�dia Aritim�tica \n");
	printf("B - M�dia Ponderada \n");
	printf("C - Geom�trica \n");
	printf("D - Harm�nica \n");
	printf("===================================================== \n");
	//
	printf("Escolha uma op��o: \n");
	opcao = getchar();
	fflush(stdin);
	//
	while(opcao != 'A' && opcao !='B' && opcao != 'C' && opcao !='D')
	{
		printf("Op��o inv�lida ! Digite um das op��es acima ! : \n");
		opcao = getchar();
		fflush(stdin);
	}
	if(opcao == 'A' || opcao == 'B' || opcao == 'C' || opcao == 'D') 
	{
		printf("Digite tr�s valores inteiros e positivos: \n");
		scanf("%d %d %d",&x, &y, &z);
		fflush(stdin);
		//		
		ma = (x + y + z)/3;
		mp = (x + y*2 + z*3)/6;
		geo = pow((x * y * z),1/3);
		har = 1/(1/x + 1/y + 1/z);
		//	
		switch(opcao)
		{
			case 'A' : printf("O resultado da m�dia aritim�tica � %d \n", ma); break;
			case 'B' : printf("O resultado da m�dia ponderada � %d \n", mp); break;
			case 'C' : printf("O resultado da ra�z c�bica � %d \n", geo); break;
			case 'D' : printf("O resultado harm�nico � %d \n", har); break; 	
		}
	} 
	else
		printf("Op��o Inv�lida ! \n");
}



