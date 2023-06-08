#include <stdio.h>

int main(){
  printf("---------------------------------\n");
  printf(" BEM VINDO AO JOGO DA ADVINHAÇÃO\n");
  printf("---------------------------------\n");
  int chute, numeroSecreto = 10;
  for(int i = 1; i <= 3; i++){
    scanf("%d",chute);
    int acertou = chute == numeroSecreto;
    if (acertou){
      printf("Parabens você acertou");
      i = 3;
    }else{
      int maior = chute > numeroSecreto;
      if(maior){
        printf("O");
      }
    }
  }

  return 0;
}

  
