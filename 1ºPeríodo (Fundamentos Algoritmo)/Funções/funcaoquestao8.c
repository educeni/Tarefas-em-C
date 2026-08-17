#include <stdio.h>

/*QUESTÃO 08:
Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N.*/

/* parametro = N ///// retorno = numeros primos*/

int funcao(int n)
{
	int i, j, quant=0;
	
	for(i=2;i<n;i++)
	{
      for(j=2;j<i;j++)
      {
      	if(i%j==0)
      	{
      	  quant--;	
		}
	  }
	  if(quant==0)
	  {
	  	printf("%d ", i);
	    }	
	}
}

 
void main()
{
	int numero;
	printf("Forneca um numero: \n");
	scanf("%d", &numero);
	
	funcao(numero);
}
