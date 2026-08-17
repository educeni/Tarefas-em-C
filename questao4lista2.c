#include <stdio.h>
/* Ler o percurso km(p) e o km/l (d) e o preço do litro(R)
   Qc = p*d
   Custo total= R* Qc
   escreva Qc e Custo total */

void main(){ 
 int p; // percurso em km e preço do litro
 float kml, r, custoTotal, qc; // kilometros por litro, custo total 

 printf("informe o percurso: \n\n");
 scanf("%d", &p);
 
 printf("informe o km por litro: \n\n");
 scanf("%f",&kml);
 
 printf("informe o preco do litro: \n\n");
 scanf ("%f", &r);
 
 qc = p*kml;
 custoTotal = r*qc;
 
 printf("\nA quantidade de combustivel e: %f. \n\n", qc);
 printf("O custo total e: %f.\n\n", custoTotal);
}

