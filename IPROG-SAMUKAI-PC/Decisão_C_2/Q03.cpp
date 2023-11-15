#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()

{
	setlocale(LC_ALL,"portuguese");
	
	float nota;
	int faltas;
	
	printf("Digite sua nota: \n");
	scanf("%f",&nota);
	
	printf("Digite sua quantidade de faltas: \n");
	scanf("%d",&faltas);
	//	
	if (nota >= 0.0 && nota <=10 && faltas <= 20) {
		if(nota >= 9.0 && nota <=10)
			printf("Seu conceito de nota - A) :D");
		else
		if(nota >= 7.5 && nota <= 8.9)
			printf("Seu conceito de nota - B) :) ");
		else
		if(nota >= 5.0 && nota <= 7.4)
			printf("Seu conceito de nota - C) :/ ");
		else
		if(nota >= 4.0 && nota <= 4.9)
			printf("Seu conceito de nota - D) ;-;");
		else
		if(nota >= 0.0 && nota <= 3.9)
			printf("Seu conceito de nota - E) :( ");
	} 
	else {
		if(nota >= 9.0 && nota <=10)
			printf("Seu conceito será B) ");
		else
		if(nota >= 7.5 && nota <= 8.9)
			printf("Seu conceito será C) ");
		else
		if(nota >= 5.0 && nota <= 7.4)
			printf("Seu conceito de nota é D)");
		else
		if(nota >= 0.0 && nota <= 4.9)
			printf("Seu conceito de nota E)");	
	}

}
