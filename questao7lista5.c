#include <stdio.h>
/* QUESTÃO 07:
Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares. */

void main(){
	
	int i, numero, produtoImpares=1, somaPares=0; //produto dos numero impares, soma dos pares, variavel i, numero fornecido pelo chefe
	
	for(i=1;i<=4;i++)
	{
	printf("forneca um numero inteiro: \n\n");
	scanf("%d", &numero);	
	
	if(numero%2 == 0)
	{
	 somaPares = somaPares + numero;
	}
	else
	{
	 produtoImpares *= numero;	
	}
	}
	printf("Esta e a soma dos numeros pares: %d \n", somaPares);
	printf("Este e o produto dos numeros impares: %d\n\n", produtoImpares);	
}
