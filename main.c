#include <stdio.h>

int main(){
  printf("---------------------------------\n");
  printf(" BEM VINDO AO JOGO DA ADVINHAÇÃO\n");
  printf("---------------------------------\n");
  int chute, numeroSecreto = 10;
  int acertou;
  for(int i = 1; i <= 3; i++){
    printf("\nDigite um numero: ");
    scanf("%d",&chute);
    acertou = chute == numeroSecreto;
    if (acertou){
      printf("Parabens você acertou");
      i = 3;
    }else{
      int maior = chute > numeroSecreto;
      if(maior){
        printf("O pouco MENOS");
      }else{
        printf("O pouco MAIS");
      }
    }
  }

  return 0;
}

  
