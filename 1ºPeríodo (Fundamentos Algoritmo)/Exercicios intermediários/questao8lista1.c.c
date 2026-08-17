#include <stdio.h> 
/* Ler o nome(n) e o tipo de apto(tapt) e nºde diárias(d) e valor do consumo(Vc)


Se tapt= A, então VTD=350.d, subtotal= VTD+Vc,
 Senão
  Se tapt= B, então VTD= 275.d, subtotal= VTD+Vc, 
               Senão
                 Se tapt=C, então VTD= 200.d, subtotal= VTD+Vc, 
                    Senão
                      VTD= 150.d, subtotal= VTD+Vc


         3) subtotal= VTD+Vc    Tx de serviço= (sub.0,1), total geral= Subtotal+tx de serviço
         4) Escreva n,Tapt,VTD,Vc,subtotal, Tx de serviço e total geral*/

int main() {
	
	int nome                // nome
    int tapt                // tipo de apartamento 
	int diaria;            // numero de diarias
	float valorConsumo;    // valor do consumo
	float vtd;            // valor total de diarias
	float subtotal;       // subtotal
	float taxaServico;    // taxa de serviço
	float totalGeral;    // total geral
	
	printf("Ola, nos informe seu nome: \n\n");
	scanf("%",&);
	
	printf ("informe o tipo de apartamento: \n\n");
	scanf("%",&);
	
	printf("informe o valor de consumo: \n\n");
	scanf("%f", &valorConsumo);
	
	printf("informe a quantidade de diarias: \n\n");
	scanf("%d", &diaria);
	
	if (tapt == a){
		vtd = 350 * diaria;
	}else{
	if (tapt == b){
		vtd = 275 * diaria;
	}else{
	if (tapt = c){
		vtd = 200 * diaria;
	}else{
	    vtd = 150 * diaria;	
	}	
	}	
	}
 subtotal = vtd + valorConsumo; taxaServico = subtotal *0.1; totalGeral = subtotal + taxaServico;
 
 printf("este e seu nome: %c \n\n", nome);
 printf("este e o tipo de apartamento: %c \n\n", tapt);
 printf("este e o valor total das diarias: %f \n\n", vtd);
 printf("este e o valor de consumo: %f \n\n", valorConsumo);
 printf("este e o subtotal: %f \n\n", subtotal);
 printf("esta e a taxa de servico: %f \n\n", taxaServico);
 printf("este e o total geral: %f \n\n", totalGeral);
 
 
}

