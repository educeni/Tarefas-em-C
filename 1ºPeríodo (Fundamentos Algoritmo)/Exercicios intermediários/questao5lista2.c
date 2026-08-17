#include <stdio.h> 

void main(){

  int c, q; // codigo e quantidade
  float v; // valor

  printf("informe o codigo: \n\n");
  scanf("%d", &c);

  printf("informe quantidade: \n\n");
  scanf("%d", &q);

  if (c == 100){
  v = q*3.5;
   printf ("esse e o valor: %f. \n\n", v);
 }else{ 
 if (c == 101){
 v = q *4.5;
 printf ("esse e o valor: %f. \n\n", v);
 }else{
 if (c == 102){
 v = q* 5.2;
 printf ("esse e o valor: %f. \n\n", v);
 }else{ 
 if ( c == 103){
 v = q*3;
 printf ("esse e o valor: %f. \n\n", v);
 }else{ 
 if (c == 104){
 v = q*4;
 printf ("esse e o valor: %f. \n\n", v);
 }else{
 v = q*2.5;
 printf ("esse e o valor: %f. \n\n", v);}


}}}}}
