#include <stdio.h>
/* QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido. */


void main(){
	
	int i, numero;
	float maiorNumero=0, numeroConjunto, menorNumero=1000000000000000000; 
	
	printf("Forneca quantos numeros voce deseja digitar: \n");
	scanf("%d", &numero);
	
	i=1;
	while(i<=numero)
	{
		printf("Forneca um valor: \n");
		scanf("%f", &numeroConjunto);
		
		if(numeroConjunto>maiorNumero)
		{
			maiorNumero = numeroConjunto;
		}
		if(numeroConjunto<menorNumero)
		{
			menorNumero = numeroConjunto;
		}
		i++;
	}
	printf("Este e o maior elemento do conjunto fornecido: %.2f\n", maiorNumero);
	printf("Este e o menor elemento do conjunto fornecido: %.2f", menorNumero);
}
