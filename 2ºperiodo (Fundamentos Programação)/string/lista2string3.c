#include <stdio.h>
/* Questão 03:
Desenvolver uma função, em C, que, dada uma
string s e dada uma posição p desta string, crie duas
novas strings: s1 com os caracteres de s das
posições 0 a p-1; e s2 com os caracteres de s da
posição p à última.
Nota: Caso p seja uma posição inválida, a função
deverá retornar o valor 0; caso contrário,
procederá com a criação das duas strings e
retornará o valor 1. */
/* parametro = string s, posicao p,  //// retorno =  */

int funcao(char str[], char s1[], char s2[], int p)
{
	int i, contstr,j;
	contstr = strlenn(str);
	
	if((p<0)&&(p>contstr))
	{
		return 0;
	}
	else
	
	for(i=0;str[i]!=p-1;i++)
	{
		s1[i]=str[i];
		
	}
	i=0;
	for(j=p;str[j]!='\0';j++)
	{
		str[i]=str[j];
		i++;
	}
	return 1;
}

int strlenn(char str[])
{
	int i;
	
	for(i=0;str[i]!='\0';i++);
	
	
	return i;
}

void main()
{
	char string[50], string1[50], string2[50];
    int retorno, p, resp;
	
	printf("Forneca a string: \n");
	scanf("%s", &string);
	printf("Forneca a posicao: \n");
	scanf("%d", &p);
	
	resp = funcao(string, string1, string2, p);
	printf("%d \n", resp);
	printf("%s", string1);
	printf("%s", string2);
}
