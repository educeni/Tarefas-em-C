#include <stdio.h>
/* QUESTÃO 07: Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.*/

void main(){
	
	int opiniao, gostou=0, naoGostou=, genero, masculino, feminino; // opiniao do cliente e genero
	
	for(i=0;i<=10;i++)
	{
		printf("Se voce gostou do novo produto digite o numero de acordo com sua opiniao: \n\n");
	    printf("1- Gostou // 2- Não gostou. \n\n");
	    scanf("%d", &opiniao);
	    
	    
	    printf("Agora, informe o seu genero: \n");
	    printf("\n1- Masculino // 2- Feminino\n");
	    scanf("%d", &genero);
	
        if(genero == 1)
		{
		 if(opiniao == 1)
	     {
          gostou++;
          masculino++;
	     }
	      else
	      {
	       naoGostou++;
	      }  
		}	
	    else
		{
		  if(opiniao == 1)
	      {
           gostou++;
           feminino++;
	      }
	      else
	      {
	       naoGostou++;
	      }  
		}   
	}
    printf("\n\nEste foi o numero de quantas pessoas nao gostaram: %d", naoGostou);
    printf("\n\nEste foi o numero de pessoas que gostaram do produto: %d", gostou);
}
