#include <stdio.h>
/* QUESTÃO 03:
Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário. */ 

void main(){
	
	int i;
	float numero;
	
	printf("Forneca um numero:");
	scanf("%f", &numero);
	
	for(i=1;i<=numero;i++)
	{
	if(numero%(float)i == 0)
	{
		printf("%.2f -%.2f ", i, i);
	}	
	}
}
