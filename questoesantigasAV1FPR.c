#include <stdio.h>
#include <string.h>
#define TAM 40
/* Questão 01:
Desenvolver uma função que, dado um e-mail no formato usuario@xxxxxxx.yyy.zz, valide-o.
Para o e-mail ser válido, as seguintes regras devem ser atendidas:
1. A parte usuario pode conter letras e algarismos. Pode também possuir símbolos (. ou _ ou -), desde que
não estejam na primeira ou na última posição desta parte;
2. A seção xxxxxxx possui apenas letras (de 5 a 15 letras), e é proibido ter a mesma letra em posições
consecutivas;
3. yyy pode assumir apenas os valores com, edu ou org;
4. A parte zz não é obrigatória. Caso exista, deve ser br. */

int funcao(char str[TAM])
{
	int i=0,tamanho, cont=0;
	tamanho = strlen(str);
	
		if((str[i]!='.')&&(str[i]!='_')&&(str[i]!='-')){
		i++;
	    while((str[i] != '@')&&(str[i]!='\0'))
		{
		  i++;	
		}
		if((str[i-1]=='.')||(str[i-1]=='_')||(str[i-1]=='-')){
			return 0;
		}
	    }
	    else
		{
	    	return 0;
		}
        while (str[i] != '.')
	    {
	    i++;
		cont++;
	    if(str[i] == str[i+1])
		{
	    	
	    return 0;
		}
	    }
	    if((cont>15)||(cont<5))
	    {
	    	return 0;
		}

	if(((str[i+1]=='c')&&(str[i+2]=='o')&&(str[i+3]=='m'))||((str[i+1]=='o')&&(str[i+2]=='r')&&(str[i+3]=='g'))||((str[i+1]=='e')&&(str[i+2]=='d')&&(str[i+3]=='u')))
	{
	
	if(str[i+1]!='\0')
	{
return 1;}
    }
	else{      
	if((str[i+2]=='b')&&(str[i+3]=='r')&&(str[i+4]=='\0'))		
      {	
	   return 1;
	  }
    }
}

void main()
{
	char string[TAM] = "usuario@xxxxxxx.com.br";
	int resp;
	
	//printf("forneca o email: \n");
	//scanf("%s", &string);
    	
    if(1 == funcao(string))	
    {
    	printf("O email foi validado.");
    	
	}
	else
	{
		printf("O email nao foi validado.");
	}
}
