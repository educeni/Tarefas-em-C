#include <stdio.h>
/* QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes
de uma região e coletados os dados de
altura e gênero das pessoas. Faça um
programa que leia as informações de 50
pessoas e informe:
? a maior e a menor alturas
encontradas;
? a média de altura das mulheres;
? a média de altura da população;
? o percentual de homens na
população. */

void main(){
	
	int genero, homem=0, mulher, i;                                    
	float altura, alturaTotal, menorAltura=3, maiorAltura=0, somaFeminino=0, mediaFeminino, mediaTotal=0;
	float percentualHomem;
	
	
	
	for(i=1;i<=50;i++)
	{
		printf("1- Masculino ////// 2- Feminino\n");
		printf("Forneca seu genero de acordo com o numero acima: \n");
		scanf("%d", &genero);
		
		printf("Forneca a sua altura: \n");
		scanf("%f", &altura);
		
		alturaTotal+=altura;
		
	    if(altura<menorAltura)	
	    {
		    menorAltura=altura;
		}	
		if(altura>maiorAltura)
		{
			maiorAltura=altura;
		}
		if(genero==1)
		{
			homem++;
		}
		else
		{
			somaFeminino+=altura;
		}
			
	}
	mulher=50-homem;
	mediaTotal = alturaTotal/(float)50;
	mediaFeminino = somaFeminino/(float)mulher;
	percentualHomem = (float)homem/50;
	percentualHomem = percentualHomem * 100;
	printf("Esta e a menor altura: %.2f\n", menorAltura);
	printf("Esta e a maior altura: %.2f\n", maiorAltura);
	printf("Esta e a media de altura do genero feminino: %.2f\n", mediaFeminino);
	printf("Esta e a media de altura da populacao: %.2f\n", mediaTotal);
    printf("Este e o percentual de homens na populacao: %.0f\n", percentualHomem);
}
