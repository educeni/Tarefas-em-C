#include <stdio.h>

/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.*/
/* parametro = a,b //// retorno = inteiro solucao do logaritmo */

int funcao(int a, int b)
{
    int x=1;
    
	b = a^x;
    return x;
}
void main()
{
	int termo1, termo2, resultado;
	
	printf("Forneca dois numeros: \n");
	scanf("%d %d", &termo1, &termo2);
	
	resultado = funcao(termo1, termo2);
	
	printf("Este e a solucao aproximada de log%d na base %d:\t %d\n", termo1, termo2, resultado);
}
