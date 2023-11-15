#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

main()
{
setlocale(LC_ALL,"portuguese");
//------ENTRADA------- 
 float num, resultado;
 
printf("Digite um numero: \n");
scanf("%f", &num);

resultado = sqrt(num);
//-------PROCESSAMENTO-------
    if (num > 0) {
      printf("A raiz quadrada do numero digitado é %.2f: \n",resultado);
    } else
    printf("Numero invalido");
}

