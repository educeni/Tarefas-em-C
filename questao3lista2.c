#include <stdio.h> 
// testando o teste Ler o peso da pessoa (p) e o nº do planeta (n)
/* Ler a forma de pagamento(p) e valor primario (Vp)
   Se p= à vista, então Vt= Vp-(Vp.0,1)
    Escreva Vt
   Senão se p= em 5x, então Vpp=Vp/5x
    Escreva Vpp em 5x
   Senão se p= 10x, então Vpp= (Vp/10).0,2
    Escreva Vpp em 10x 
    */
   
void main(){
   int p;                 //forma de pagamento
   float vt;             // valor total
   float vpp;            //valor das prestacoes
   float valorPrimario; // Valor primario
   
   printf("Ola, insira a forma de pagamento: \n\n");
   scanf("%d", &p);
   
   printf("informe o valor primario: \n\n");
   scanf("%f", &valorPrimario);
   
   // calculo
   if (p == 1){
    vt = (valorPrimario - (valorPrimario*0.1));
    printf("valor total sera de: %f. \n\n", vt);
   }else{
    if (p == 5){
    vpp = valorPrimario/5;
    printf("valor das prestacoes sera de: %f. \n\n", vpp);
    } else{
    if (p == 10){
    vpp = (valorPrimario/10)*1.2; 
    printf("valor das prestacoes sera de: %f. \n\n", vpp);
}
}    
    }    
    }



