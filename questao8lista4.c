#include <stdio.h>
/* QUESTÃO 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários. Cada
funcionário deverá responder um
questionário ao qual informará os seguintes
dados: matrícula, gênero, idade, salário e
tempo (em anos) de trabalho na empresa. A
execução do programa deve exibir os
seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
antigo e mais novo. */ 

void main(){
	
	int matricula, genero, idade, salario, tempo, i, maisVelho=0, maisNovo, matriculaVelho=0, matriculaNovo=0; // declaração de variáveis
	int quantidadeIdade=0, quantidadeFeminino=0, quantidadeHomem=0;
	float mediaHomem=0;
	
	for(i=1;i<=5;i++);
	{
	 printf("Forneca sua matricula: \n");
	 scanf("%d", &matricula);	
		
	 printf("\n1-Masculino /// 2- Feminino\n");	
	 printf("Informe seu genero de acordo com o numero acima: \n");
	 scanf("%d", &genero);
	 
	 printf("Forneca sua idade: \n");
	 scanf("%d", &idade);
	 
	 printf("Forneca seu salario: \n");	
	 scanf("%d", &salario);
	 
	 printf("Forneca o seu tempo na empresa: \n");
	 scanf("%d", &tempo);
	 
	if(idade<22) 
	{
	 quantidadeIdade++;
	} 
	if(genero == 2)
	{
	 quantidadeFeminino++;
	}
	 else
	 {
	 quantidadeHomem++;
	 } 
	if(tempo>maisVelho)
	{
     maisVelho = tempo;
     matriculaVelho = matricula;
	} 
	if(tempo<=maisNovo)
	{
	 maisNovo = tempo;
	 matriculaNovo = matricula;	
    }	
	}
	mediaHomem = (float)salario/quantidadeHomem;
    printf("Esta e a quantidade de funcionarios com menos de 21 anos: %d\n\n", quantidadeIdade);
	printf("Esta e a quantidade de funcionarios do genero feminino: %d\n\n", quantidadeFeminino);
	printf("Esta e a media salarial entre os homens: R$%.2f\n\n", mediaHomem);
	printf("Esta e a matricula do mais velho %d e esta e a matricula do mais novo %d", matriculaVelho, matriculaNovo);
}
