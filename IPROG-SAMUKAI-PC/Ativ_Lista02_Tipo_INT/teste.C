#include <stdio.h>
#define PI 3.1415

main() {
double raio, perim;

printf("\n Qual a medida do raio ?");
scanf("%lf",&raio);
perim = 2*PI*raio;
printf("\n O perimetro da circuferencia é %lf", perim);
}
