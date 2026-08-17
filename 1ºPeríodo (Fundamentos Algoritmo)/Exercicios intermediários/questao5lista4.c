#include <stdio.h>
/* QUESTÃO 05: Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/

/* limite n = 50
primeiro numero = 1 , sequencia = nPar+2, nImpar-2 */

void main(){
	
	int nPar = 0, impar , i;   // numero impar negativo, numero impar positivo e i
	
	// impar positivo começa com 1, termina no numero 50 e aumenta de dois em dois 
	// par negativo diminui de dois em dois
	for(i=1; i<=50; i = i+2)
	{
	  nPar = nPar - 2;
	  printf("%d %d ", i, nPar);			
	}
    
}
