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


#include <stdio.h> 

int main() {
	
	/* declaração de variáveis */
	float nome,
	 tapt(A,B,C,D), /* tatp= tipo de apartamento*/
	 d,    /*d= n° de diárias*/
	 vc,   /*vc= Valor de consumo interno*/
	 VTD,  /*VTD= Valor total das diárias*/ 
	
	//1° ler as variáveis
	
	printf ("Ola, nos informe seu nome: /n");
	scanf("nome");
	
	printf ("Agora informe o seu tipo de apartamento: /n");
	scanf ("tapt");
	
	printf ("Agora, informe o numero de diarias:/n");
	scanf ("%d", &d);
	
	printf ("Por ultimo, informe o seu valor de consumo: /n");
	scanf ("%f", &vc);
	
	//se o tipo de apartamento for A, faremos esse cálculo 
	if (tapt=A);
	{
		
		
	}
	


	
	
	
	
}
	//tipo de apto, numero de diarias e valor de consumo: /n/n");
	//scanf("%d", "nome", "tapt", "d", "vc");
	
//	if(tapt=A) {
//	 VTD= 350*d) };
//	printf("VTD\n");
