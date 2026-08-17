#include <stdio.h>
/* QUESTÃO 06:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,... */
//razão i*=i

void main(){
	
	int i, razao;
	
	printf("Este sao somente os primeiros termos da PA: \n\n");
	
	for(i=1;i<=100;i)
	{
	for(razao=1;razao<=10;razao=razao^2)
	{
	i=i*razao;	
	}
		printf("%d ", i);
	}
}
