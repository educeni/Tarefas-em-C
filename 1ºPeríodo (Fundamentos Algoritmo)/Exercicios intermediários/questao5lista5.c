#include <stdio.h>
/* QUESTÃO 05:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,... */
// razão = 2x

void main(){
	
	int i;
	
	printf("Este sao somente os primeiros termos da PA: \n\n");
	
	
	for(i=1;i<=10000;i*=2)
	{
	printf("%d ", i);
	}
}


