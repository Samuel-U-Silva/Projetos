#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    //Somar, subtrair, multiplicar e dividir podem ser utilizados para realizar operações com números inteiro.
    int num1, num2, somar, subtrair, multiplicar, dividir;
    //----------------TECLADO-------------------
    printf("Digite um valor: \n");
        scanf("%d",&num1);
    printf("Digite outro valor: \n");
        scanf("%d",&num2);
    //--------------FÓRMULAS---------------------
    somar = num1 + num2;
    subtrair = num1 - num2;
    multiplicar = num1 * num2;
    dividir = num1 / num2;
    //----------------TELA------------------
    printf("O resultado da SOMA é : %d + %d = %d \n", num1, num2, somar);
    printf("O resultador da SUBTRAÇÃO é : %d - %d = %d \n", num1, num2, subtrair);
    printf("O resultado da MULTIPILICAÇÃO é : %d x %d = %d \n", num1, num2, multiplicar);
    printf("O resultado da DIVISÃO é : %d / %d = %d \n", num1, num2, dividir);
}