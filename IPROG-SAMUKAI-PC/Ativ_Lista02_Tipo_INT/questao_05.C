#include <stdio.h>

int main() {
//-------VARIÁVEIS------------------
    int num1, num2, num3, soma, ma;
    //ma = Média Aritmética
//------ ENTRADA E LEITURA----------
    printf("Digite um valor: \n");
     scanf("%d", &num1);
    printf("Digite um segundo valor: \n");
     scanf("%d", &num2);
    printf("Digite um terceiro valor: \n");
     scanf("%d", &num3);
//---------OPERAÇÕES---------------
    soma = num1 + num2 + num3;
    ma = soma / 3;
//---------RESULTADOS--------------
    printf("--------RESULTADOS-------- \n");
    printf("O resultado da soma : %d + %d + %d = %d \n", num1, num2, num3, soma);
    printf("O resultado da media aritmetica : %d / 3  = %d \n", soma, ma);
}
