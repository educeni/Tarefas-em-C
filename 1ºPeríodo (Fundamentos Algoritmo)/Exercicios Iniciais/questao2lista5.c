#include <stdio.h>
/* QUESTÃO 02:
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.*/

void main(){
	
	int numero, i, soma=0; //numero fornecido pelo usuario, variavel i e a soma dos numero até o N
	
	printf("Forneca um numero inteiro: \n");
	scanf("%d", &numero);
	
	for(i=1;i<=numero;i++)
	{
	soma = soma + i;	
    }
    printf("%d ", soma);
}
