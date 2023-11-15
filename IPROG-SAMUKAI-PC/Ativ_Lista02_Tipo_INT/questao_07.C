#include <stdio.h>

int main() {
//------VARIÁVEIS----------------
    int valor;
    float reajuste;
//------ENTRADA E LEITURA-----------
    printf("Digite um valor : \n");
     scanf("%d", &valor);
//------FÓRMULA---------------
    reajuste = valor - (valor * 9 / (float)100);
//----------RESUTADO-----------
    printf("Reajuste de de 9%% aplicado. \n");
    printf("O resultado do valor apos o reajuste - R$ %.2f \n", reajuste);
}
