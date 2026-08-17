#include <stdio.h>
/* QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário. */

void main(){
	
	int base, expoente, expoente2, valorTotal=1, i;
	
	printf("Forneca um valor inteiro como base: \n");
	scanf("%d", &base);
	
	printf("Forneca um valor inteiro como expoente: \n");
	scanf("%d", &expoente);

    for(i=1;i<=expoente;i++) 	
	{
		valorTotal*=base;
		
	}
	printf("Este e o valor baseexpoente: %d\n", valorTotal);
}
