/* Questão 04:
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.*/
/* parametro = caracter, string  //// retorno =  */

void funcao(char c, char str[])
{
	int i,j;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
		   j=i;
		   do
		   {
		   str[j] = str[j+1]; 	
		   	j++;
		   }
		   while(str[j]!='\0');
		}		
	}
}

void main()
{
	char string[] = "texto";
	char caracter;
	
	printf("Informe o caracter a ser removido: \n");
	scanf("%c", &caracter);
	printf("%s \n", string);
	funcao(caracter, string);
	printf("%s \n", string);
}
