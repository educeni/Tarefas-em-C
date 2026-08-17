#include <stdio.h>
#include <string.h>
#define TAM 17
/* Atividade 1: Desenvolver uma função que, dada uma string
str, substitua uma substring s1 de str (definida
pelas posições inicial e final) por outra string,
s2.

Exemplo:
str originalmente:
e ai, vc vem?


str após a substituição:
e ai, voce vem?
*/



char funcao(char str[], int tamanho, int p1, int p2, char str2[], char strfinal[])
{
	int i, j=0, k=0;
	
	//contstr = strlen(str2);

    for(i=0;i<p1;i++)
   	{		
	  strfinal[k] = str[i];
	  k++;
    }
    
	for(i=p1,j=0;i<tamanho;i++,j++) 
	{
		if(str2[j]!='\0')
		{
		  strfinal[k] = str2[j];
		  k++;
	    }
	}
		
	for (i = p2 + 1; str[i]!='\0'; i++)
	{
        strfinal[k] = str[i];
        k++;
    }
    
	strfinal[k] = '\0';
}

void main()
{
	char string[TAM] = "e ai, vc vem?";
	char string2[TAM] = "voce";
	char resp[TAM];
	int s1, s2;
	
	printf("Forneca a posicao 1: \n");
	scanf("%d", &s1);
	printf("Forneca a posicao 2: \n");
	scanf("%d", &s2);
	
	printf("%s\n", string);
	funcao(string, TAM, s1, s2, string2, resp);
	printf("%s\n", resp);
}
