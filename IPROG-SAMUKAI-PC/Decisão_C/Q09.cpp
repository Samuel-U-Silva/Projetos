#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	float a, b, c, x1, x2, delta, delta_R;
	
	printf("Informa três valores: \n");
	scanf("%f %f %f",&a, &b, &c);
	////////////////////////////////////
	delta = (b * b) - (4*a*c);
	delta_R = sqrt(delta);
	x1 = (-b + delta_R)/(2*a);
	x2 = (-b - delta_R)/(2*a);
	////////////////////////////////
	if(a != 0) {
		if(delta >= 0) {
			if(delta > 0 && x1 != x2) 
				printf("X1 e X2 são diferentes, as raízes são %.2f %.2f \n",x1,x2);
			if(delta == 0 && x1 == x2) 
				printf("X1 e X2 são iguais \n");
		}
		 else 
		  	printf("Não existe raiz. %.2f \n", delta);
   }
	else 
		printf("Não é equação do segundo grau. \n");
}
