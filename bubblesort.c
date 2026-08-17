#include <stdio.h>
#define TAM 5

void bubblesort(int vet[], int tamanho)
{
	//declaração de variáveis
	int i, step, j;
	
	// controla as passagens
	for(i=0;i<tamanho;i++)
	{
		//compara um termo ao seu sucessor ( checando se está ordenado )
		for(j=0;j<tamanho - i - 1;j++)
		{
			// Se o elemento atual for maior que o próximo, eles trocam de lugar
		  if(vet[j]>vet[j+1])
		  {
			step = vet[j+1]; // Guarda o valor atual temporariamente
			vet[j+1] = vet[j]; // Substitui o atual pelo próximo
	 		vet[j] = step; // Coloca o valor guardado na próxima posição
		  }
	    }
	}
}

void exibirVetor(int vet[], int tamanho)
{
	int i;
	for(i=0;i<tamanho;i++)
	{
		if(i==tamanho-1){
		printf("%3d \n\n", vet[i]);
	    }
	    else{
	    	printf("%3d ", vet[i]);
		}
	}
}

void main()
{
	//declaração de variáveis
	int vetor[TAM] = {7, 10, 5, 6, 8};
	
	// exibindo vetor antes do bubble sort
	exibirVetor(vetor, TAM);
	
	//chamando a função ( bubble sort)
	bubblesort(vetor, TAM);
	
	//exibindo vetor após o bubble sort
	exibirVetor(vetor, TAM);
}
