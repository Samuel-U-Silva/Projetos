#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); 
    int x = 0;
    int y = 0;
    //------OPERAÇÕES----------
    printf("Digite o valor de x ");
    printf(">>> ");
    scanf("%d", &x);

    printf("Digite o valor de y ");
    printf(">>> ");
    scanf("%d", &y);


    double a = (x / 4.0) + y; 
    double b = (x % 4) + y; 
    double c = (x / 6.0 + x / 3.0) / 4.0; 
    double d = x % y*6;
    double e = (x % 6 + x % 3) % 4;
    
    printf("\n\n\n");

    printf("A = x ➗ 4 + y\n");
    printf("B = x %% 4 + y\n");
    printf("C = (x ➗ 6 + x ➗ 3) ➗ 4\n");
    printf("D = x %% y*6\n");
    printf("E = (x %% 6 + x %% 3) %% 4\n");
    
    printf("\n\n");

    printf("------RESULTADOS------ \n");
    printf("O resultado da expressao A : (%d / 4) + %d = %.2f \n", x, y, a);
    printf("O resultado da expressao B : (%d %% 4) + %d = %.2f \n", x, y, b);
    printf("O resultado da expressao C : (%d /6 + %d / 3) / 4 = %.2f \n",x, x, c);
    printf("o resultado da expressao D : (%d %% %d * 6) = %.2f \n",x, y, d);
    printf("O resultado da expressao E : (%d %% 6 + %d %% 3) %% 4 = %.2f \n", x, x, e);
}