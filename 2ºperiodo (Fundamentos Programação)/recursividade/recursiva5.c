#include <stdio.h>

/* Questão 05:
Pede-se a implementação de uma função
recursiva que exiba os n primeiros termos de
uma PG (Progressão Geométrica), onde a1 é o
seu primeiro termo e q a razão.
Observação: uma PG consiste em uma
sequência de valores, iniciadas pelo valor a1. Os
demais elementos são definidos como o
anterior multiplicado pela razão. */

int recursiva(int a1, int q, int n)
{
	int numero;
	
	//	CASO BASE
   if(n==0)
   {
   	return 0;
   }
   
   // CASO GERAL
   else
   {
   	recursiva (a1*q, q, n-1);
   	printf("%d ", a1);
   }
}
  

void main()
{
	int a1, r, num;

	printf("Forneca o primeiro termo : \n");
	scanf("%d", &a1);
	printf("Forneca a razao: \n");
	scanf("%d", &r);
	printf("Forneca quantos serao os termos da Pg: \n");
	scanf("%d", &num);
	
	recursiva(a1, r, num);
}
