/* QUESTÃO 01:
Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N. */

void main(){
	
	int numero, i;  // variavel numero fornecido e i  
	
	printf("Forneca um numero inteiro: \n");
	scanf("%d", &numero);
	
	if(numero > 0)
	{
	for(i=0;i<=numero;i = i+2)
	{
	 printf("%d ", i);	
	}	
	}
	else
	{
	for(i=-1000;i<=numero;i=i+2)
	{
	  printf("%d", i);
	}	
	}
}
