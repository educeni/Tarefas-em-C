#include <stdio.h>
#include <string.h>
#define TAM 10
/* Desenvolver uma função que, dada uma string
s, retorne um vetor de structs que armazene,
em cada uma de suas posições, um caracter
distinto de s e a quantidade de ocorrências
deste caracter na string.
Observações:
1. Ao incluir um novo caracter no vetor de
structs, deve-se buscar a posição apropriada,
de forma que o vetor fique ordenado
crescentemente em função dos caracteres;
2. Pelo que foi descrito no enunciado,
repetições de caracteres não são permitidas
no vetor. */
/* parametro = string s, //// retorno = caracter distinto e quantidade de ocorrencias */
typedef struct{
    char caracter;	
	int qtd;
	
}TString;

void funcao(char str[TAM], int *tamanho, TString contagem[TAM])
{
	int i, cont,j,k;
	char step;

	
    for(i=0;i<TAM;i++)
    {
    	cont=0;
    	j=i;
    	step = str[j];
        contagem[i].caracter = str[j];
    	while(str[j]!='\0')
    	{   
    	    
    		if(step==str[j])
    		{
    			cont++;
			}	
    		j++;
		}	
          if(cont==0)
	    {
	    	(*tamanho)--;
		}
    	contagem[i].qtd = cont;
	}

}

void funcao2(int *tamanho, TString contagem[])
{
	
	int	j=0,i,k;
	TString step;
		
	while(j<(*tamanho))
	{ 
	    i=j+1;
	    while(i<(*tamanho))
	    {
		
		if(contagem[j].caracter>contagem[i].caracter)
		{
			step = contagem[i];
            contagem[i] = contagem[j];
          	contagem[j] = step;
		}
		i++;
	    }
		for(i=j+1;i<(*tamanho);i++)
		{
			
			
            if(contagem[j].caracter == contagem[i].caracter)
            {
            	for(k=i;k<(*tamanho);k++)
            	{
            	    step = contagem[k+1];
            		contagem[k+1] = contagem[k];
            		contagem[k] = step;
				}
				(*tamanho)--;
			}
			
			
		}
		j++;
	}
	
}

void exibir_struct(int tamanho, TString contagem[])
{
    int i;
    
    for(i=0; i<tamanho;i++)
    {
        printf("\t%i numero \n", i );
        printf("\tletra: %c \n", contagem[i].caracter);
        printf("\tquantidade: %i \n\n", contagem[i].qtd);
    }
}

void main()
{
    char s[TAM] = "t este";
    TString contagem[TAM];
    int tamanho = TAM, i;
	
	funcao(s, &tamanho, contagem);
	funcao2(&tamanho, contagem);
    exibir_struct(tamanho, contagem);
}
