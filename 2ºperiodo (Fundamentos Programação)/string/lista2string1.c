#include <stdio.h>
/* Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s. */
/* parametro = string s //// retorno = quantidade de caraceteres distintos - cont */

int funcao(char str[])
{
	int i,j, cont=1;
	
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i;str[j]!='\0';j++)
		{
		  if(str[i]!=str[j])
		  {
		   cont++;
		   break;
     	   }  	   
		}
	}
	return cont;
}

void main()
{
    char string[] = "fedcba";
	int resp;
	
	resp = funcao(string);
	printf("%d ", resp);
}
