#include <stdio.h>
/* Questão 03:
Desenvolver uma função que, dada uma string s,
crie uma substring que inicie na posição p de s e
contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s. */
/* parametro = string s, n, posicao p ///// retorno =  */


funcao(char str[], int p, int n, char str2[])
{
    int i, quantstr,j=0;
    quantstr = strlenn(str);
    
    if((p>=0)&&(p<=quantstr)&&(n>=0)&&(n<=quantstr))
    {
	for(i=p;(str[i]!=n)&&str[i]!='\0';i++,j++)
	{
		str2[j] = str[i];
	}
    }
	str2[j] = '\0';
}

int strlenn(char str[])
{
	int i;
	
	for(i=0;str[i]!='\0';i++);
	
	
	return i;
}


void main()
{
	char string[50], string2[50];
	int posicao, quant;
	
    printf("forneca uma string s: \n");
	scanf("%s", &string);
	printf("forneca a posicao p: \n");	
	scanf("%d", &posicao);
	printf("forneca a quantidade de caracteres na substring: \n");
	scanf("%d", &quant);
	
	funcao(string, posicao, quant, string2);
	printf("Esta e a substring : %s", string2);	
}
