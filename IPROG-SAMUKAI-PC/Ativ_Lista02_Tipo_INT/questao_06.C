#include <stdio.h>

int main()
 {
//------VARIÁVEIS----------------
    int valor = 0;
    float reajuste = 0;
//------ENTRADA E LEITURA-----------
    printf("Digite um valor : \n");
     scanf("%d", &valor);

     printf("Qual o reajuste ? : \n");
     scanf("%f", &reajuste);
//------FÓRMULA---------------
    float resultado_reajuste = valor + ((valor * 10) / (float)100);
//----------RESUTADO-----------
    printf("O resultado do valor apos o reajuste de %.2f %% = R$ %.2f \n", reajuste, resultado_reajuste);
}