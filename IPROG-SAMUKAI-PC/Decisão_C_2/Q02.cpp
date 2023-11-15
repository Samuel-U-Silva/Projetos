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
	printf("A - Média Aritimética \n");
	printf("B - Média Ponderada \n");
	printf("C - Geométrica \n");
	printf("D - Harmônica \n");
	printf("===================================================== \n");
	//
	printf("Escolha uma opção: \n");
	opcao = getchar();
	fflush(stdin);
	//
	while(opcao != 'A' && opcao !='B' && opcao != 'C' && opcao !='D')
	{
		printf("Opção inválida ! Digite um das opções acima ! : \n");
		opcao = getchar();
		fflush(stdin);
	}
	if(opcao == 'A' || opcao == 'B' || opcao == 'C' || opcao == 'D') 
	{
		printf("Digite três valores inteiros e positivos: \n");
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
			case 'A' : printf("O resultado da média aritimética é %d \n", ma); break;
			case 'B' : printf("O resultado da média ponderada é %d \n", mp); break;
			case 'C' : printf("O resultado da raíz cúbica é %d \n", geo); break;
			case 'D' : printf("O resultado harmônico é %d \n", har); break; 	
		}
	} 
	else
		printf("Opção Inválida ! \n");
}



