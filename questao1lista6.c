#include <stdio.h>
/* QUESTÃO 01: Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos. */


void main(){
	
	int i, multiplo=0, numero, numero50;
	
	printf("Forneca um valor inteiro: \n");
	scanf("%d", &numero);
	
	for(i=1; i<=50; i++)
	{
		printf("Forneca novamente um valor inteiro para saber se e multiplo de %d: \n", numero);
		scanf("%d", &numero50);
		
		if(numero50!=0)
		{
		
		if(numero50%numero==0)
		{
			multiplo++;
		}
 	    }
		
	}
	printf("Este e o total de multiplos de %d: %d", numero, multiplo);
}
