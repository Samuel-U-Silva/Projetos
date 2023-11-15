#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 0, soma = 0;
//-----ENTRADA DE DADOS----------------
    printf("Digite um valor: \n");
    scanf("%d", &num1);
    printf("Digite outro valor: \n");
    scanf("%d", &num2);
//-------FÓRMULA-------------------
     soma = num1 + num2;
//-----CONCLUSÃO--------------------
    if(soma >= 10)
    {
        printf("O resultado da soma : %d", soma);
    } 
    else 
    {
        printf("O resultado da soma tem valor menor do que 10. \n");
        printf("Valor da soma: %d", soma);
    }  
}