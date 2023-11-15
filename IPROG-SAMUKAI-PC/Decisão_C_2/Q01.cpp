#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

main ()

{
	setlocale(LC_ALL,"portuguse");
	
	int idade;
	
	printf("============================================\n");
	printf("\t \t CATEGORIA \n");
	printf("============================================\n");
	
	printf("Digite sua idade: \n");
	scanf("%d",&idade);

	if (idade >= 5 && idade <=7 || idade >=8 && idade <=10 || idade >=11 && idade <=13 || idade >=14 && idade <=17 || idade >=18) 
	{
		if(idade >=5 && idade <=7) 
			printf("Infantil A \n");
		else
		if(idade >=8 && idade <=10)
			printf("Infantil B \n");
		else
		if(idade >=11 && idade <=13)
			printf("Juvenil A \n");
		else
		if(idade >=14 && idade <=17)
			printf("Juvenil B \n");
		else
		if(idade >= 18)
			printf("Adulto \n");	
	}
	else 
	{
		printf("Idade inválida para a classificação de natação. \n");	
	
	} 
		
	
}
