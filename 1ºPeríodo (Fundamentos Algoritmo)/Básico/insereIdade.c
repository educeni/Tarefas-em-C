#include <stdio.h>

int main() {

   int idade, idadeNova;

   printf("Insira a sua idade: \n");
   scanf("%d", &idade);
   
   idadeNova = idade + 1;
   
   printf("No ano que vem voce vai fazer: %d anos.", idadeNova);
}

