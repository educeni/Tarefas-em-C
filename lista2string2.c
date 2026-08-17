#include <stdio.h>
/*Questão 02:
Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.
Nota: em s3, não devem existir caracteres
repetidos.*/
/* parametro = s1,s2,s3 ////// retorno =  */

void funcao(char str1[], char str2[], char str3[])
{
	int i,j=0, cont,k,l;
    
    for(i=0;str1[i]!='\0';i++) 
    {
    	str3[i]=str1[i];
	}
	
    do
    {
    	cont=0;
    	for(k=0;str2[k]!='\0';k++)
		{
    	  if(str3[j]==str2[k])
    	  cont++;
        }
        if(cont>=1)
        {
        	for(str3[l]='\0';str3[l]!=str3[j];l--)
        	str3[j] = str3[j+1];
		}
    	j++;
	}
	while(str3[j]!='\0');
}

void main()
{
	char string1[50], string2[50], string3[50];
	
	
	printf("Forneca a string 1 : \n");
	scanf("%s", &string1);
	printf("Forneca a string 2 : \n");
	scanf("%s", &string2);
	
	funcao(string1, string2, string3);
	printf("Esta e a string 3: %s", string3);
}
