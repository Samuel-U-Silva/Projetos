#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int lad1, lad2, lad3, a, b, c;
	
	printf("Digite três valores para cada lado de um  triângulo: \n");
	 scanf("%d %d %d",&lad1, &lad2, &lad3);
	 // O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
	 // lad1 <  a(lad2 + lad3) 
	 // lad2 < b(lad1 + lad3)
	 // lad3 < c(lad1 + lad2) 
	 a = lad2 + lad3;
	 b = lad1 + lad3;
	 c = lad1 + lad2;
	 
	if(a > lad1 && b > lad2 && c > lad3)
		if(lad1 == lad2 && lad1 == lad3)
			printf("Triângulo Equilátero.\n");
		else 
			if(lad1 == lad2 || lad2 == lad3 || lad3 == lad1 )
				printf("Triângulo Isóceles. \n");
			else
				printf("Triângulo Escaleno. \n");
	else
		printf("Não foi possível formar um triângulo. \n");	
}
