#include <stdio.h>
/* QUESTÃO 04:
Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão
Aritmética) com primeiro termo a1 e razão
r. */

void main(){
	
	int numero, primeiroTermo, razao, i; // numero, primeiro termo e razão fornecidos pelo usuario e variavel i
	
	printf("forneca um primeiro termo: \n");
	scanf("%d", &primeiroTermo);
		
	printf("forneca um numero para saber os primeiros termos na PA: \n");
	scanf("%d", &numero);
	
	printf("Forneca a razao: \n");
	scanf("%d", &razao);

	for(i=primeiroTermo;i<=numero;i= i*razao)
	{
	printf("%d ", i);	
	}
}
