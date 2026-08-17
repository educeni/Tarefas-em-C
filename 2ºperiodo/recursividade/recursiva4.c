#include <stdio.h>

/* Questão 04:
Fazer uma função recursiva que, dado um
número inteiro N, exiba o mesmo na base 2
(binária).*/

int recursiva(int N)
{
	int binario, teste ;
	
	//Caso Base
	if(N == 1)
	{
		printf("01");
		return 0;
	}
	
	// Caso Geral
	else
	{
		binario = N%2;		 
		recursiva(N/2);
		printf("%d", binario);
	}
}



void main()
{
	int n;
	
	printf("Forneca N: \n");
	scanf("%d", &n);
	
	recursiva(n);
}
