#include <stdio.h>
/*Dada uma string s, desenvolver uma função que
determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.*/
/* parametro = string(s) //// retorno = se é ou não palindromo*/

int funcao(char str[])
{
	int i=0,j=0,cont=0;
	
	while(str[i]!='\0')
	{
		if(str[i]!=str[j])
		{
			cont++;
		}
		i++;
		j++;
	}
	
	if(!cont)
	{
	
	    return 0;
    }
    else
    {
    	return 1;
	}
}

void main()
{
    char string[50] = "seresu";
    int resp;
    
    resp = funcao(string);
    if(!resp)
    {
    	printf("Esta string e um palindromo \n");
	}
    else
    {
    	printf("Esta string nao e um palindromo \n");
	}
}
