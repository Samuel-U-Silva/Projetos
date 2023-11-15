#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
main()
{
	// Contar de 0 a 100 usando as três formas de repetição.
	setlocale(LC_ALL,"portuguese");
	int i, num;
	char opcao;
	printf("-------\t FORMAS DE REPETIÇÃO ------------------------ \n");
	printf("A - FOR \n");
	printf("B - WHILE \n");
	printf("C - DO WHILE \n");
	printf("--------------------------------------------------- \n");
	printf("Escolha uma das opções: \n");
	opcao = getchar();
	fflush(stdin);
	//
	while(opcao !='A' && opcao !='B'&& opcao!='C')
	{
		printf("Opção inválida ! Escolha novamente uma das opções ! : \n");
		opcao = getchar();
		fflush(stdin);
	}
	if(opcao =='A'|| opcao =='B'|| opcao =='C')
	{
		if(opcao=='A')
		{
			for(i = 0; i >= 0 && i <= 100; i++)
				printf("%d \n", i);
		}	
		else if(opcao=='B')
		{
			while(i>=0 && i<=100)
			{
				printf("%d \n",i);
				i++;
			}
		}
		else 
		{
			do
			{
				printf("%d \n",i);
				i++;
			} while(i>=0 && i<=100)
		}
	}
}
