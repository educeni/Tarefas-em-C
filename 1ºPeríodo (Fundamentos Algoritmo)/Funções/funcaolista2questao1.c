#include <stdio.h>

/*QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.*/
/*parametros = n,a,b ///// retorno = todos que nao forem multiplos de n*/

void funcao(int n, int a, int b)
{
	int i, menor=0, maior;
	if(a>b)                //menor=(a>b)?b:a;
	{
		maior = a;
		menor=b;
	}
	else
	{
		maior=b;
		menor=a;
	}
	
	for(i=menor;i<=maior;i++)
	{
		if(i%n!=0)
		{
			printf("%d ", i);
		}
	}	
}

void main()
{
	int numero, termo1, termo2;
	
	
	printf("Forneca um numero inteiro: \n");
	scanf("%d", &numero);
	printf("Forneca o intervalo: \n");
	scanf("%d %d", &termo1, &termo2);
	
	funcao(numero, termo1, termo2);
}
