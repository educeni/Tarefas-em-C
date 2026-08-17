#include <stdio.h>
#include <string.h>
/* Questão 04:
Desenvolver uma função que remova de uma
string s os caracteres compreendidos entre as
posições p1 e p2.
Caso p1 ou p2 seja uma posição inválida, a
função deverá retornar o valor 0 e a remoção de
caracteres solicitada não será realizada; caso
contrário, deverá retornar 1 e proceder com o
que foi pedido. */
/* parametro = string s,p1,p2 ///// retorno = 1 e 0*/

int funcao(char str[], int pos1, int pos2)
{
    int i, contstr, j=pos1;
    contstr = strlen(str);
    
    if((pos1<0)||(pos1>contstr)||(pos2<0)||(pos2>contstr))
	{
		return 0;
	}
    else
	{
	  for(i=pos2+1;str[i];i++)
      {
        str[j]=str[i];
        j++;
      }
    }
    str[j]='\0';
    
    return 1;
}

void main()
{
    char string[50] = "cachorro";
    int p1, p2, resp;
 
   printf("Forneca as posicoes: \n");
   scanf("%d %d", &p1, &p2);

   resp = funcao(string, p1, p2);
   printf("%d\n", resp);
   printf("%s", string);
}
