#include <stdio.h>

int main(){
   int numeroJogador, numeroComputador, resultado;
   char tipoComparacao;

   srand(time(0));
   numeroComputador = rand () %100 +1;
   
   printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
   printf("Você deve escolher um número e o tipo de comparação.\n");
   printf("M. Maior\n");
   printf("N. Menor\n");
   printf("I. Igual\n");

   printf("Escolha a comparação: ");
   scanf("%c", &tipoComparacao);

   printf("Digite seu número (entre 1 e 100): ");
   scanf("%d", &numeroJogador);  

   printf("O número do computador é: %d\n", numeroComputador);
   
   switch (tipoComparacao)
   {
   case 'M':
      break;
   case 'N':
      break;
   case 'I':
      break;   
   default:
      printf("Opção de jogo inválida")
      break;
   }


}