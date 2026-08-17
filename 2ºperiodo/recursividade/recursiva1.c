#include <stdio.h>

/* Questão 03:
Desenvolver uma função recursiva que exiba
todos os múltiplos do número N, inferiores ou
iguais ao valor V. */

int recursiva(int n, int v)
{
	int multiplos=1*n;
	
	//caso Base
	if(multiplos>v)
	{
	    return 1;	
	}
	else
	{
		recursiva (n*2,v);
		printf("%d \n", multiplos);
	}
	//caso Geral
}



void main()
{
	int N, V;
	
    printf("forneca N: \n");
	scanf("%d", &N);
	
	printf("forneca V: \n");
	scanf("%d", &V);	
	
	recursiva(N, V);
	
}
