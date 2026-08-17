#include <stdio.h>
/*QUESTÃO 06: Faça um programa que leia
200 números inteiros. Ao final, exibir:
a) O maior número fornecido, de
ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A média dos valores pares.*/

void main(){
	
	int i, numero, maiorNumero=0, somaPares=0, quantidade=0;
	float mediaPares;
	
	
	for(i=1;i<=6;i++)
	{
		printf("Forneca um numero inteiro: \n");
		scanf("%d", &numero);
		
		if(i%2==0)
		{
			quantidade++;
			somaPares+=numero;
			if(numero>maiorNumero)
			{
				maiorNumero=numero;
			}
		}
	}
	printf("Este e o maior valor dentre a ordem par dos valores fornecidos: %d\n", maiorNumero);
	mediaPares = (float)somaPares/quantidade;
	printf("Esta e a media dos valores pares: %.2f", mediaPares);
}
