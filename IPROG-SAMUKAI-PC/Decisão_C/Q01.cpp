#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

main()
{
    setlocale(LC_ALL,"");
//----------ENTRADA-------------	
    int num1, num2;
    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);
//------PROCESSAMENTO--------------
    if (num1 >= num2)
    {
        if (num1 == num2)
        {
            printf("Numeros Iguais \n");
            
        } else 
        printf("O numero %d e maior que %d. \n",num1,num2);
        
    } else 
       printf("O numero %d e menor que %d. \n", num1,num2);
//------------SAÍDA----------------
    printf("Fim do Programa !");
}
