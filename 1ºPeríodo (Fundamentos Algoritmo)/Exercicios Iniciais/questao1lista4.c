#include <stdio.h>
/* QUESTÃO 01: Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/

/* 1) Ler valor inteiro y e valor inteiro n
2) Exibir todos o valores de multiplos até o n.*/

void main(){
	
	int y , n; // Valor n e valor y fornecidos pelo usuario
    int i;

    printf("Forneca um valor inteiro positivo para descobrir seus multiplos: \n");
    scanf("%d", &y);
    printf("Forneca um valor inteiro positivo como limite: \n");
    scanf("%d", &n);
    // exibindo os múltiplos de y inferiores que n
    	for(i=0;i<n;i+=y)
	{
		printf("\n %d ", i);
	}
}
