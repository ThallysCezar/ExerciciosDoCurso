#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int x , n, tentativas = 1;
  srand(time(NULL));
  x = rand() % 11;
  do{
    printf("Digite um numero entre 0 e 10: ");
    scanf("%d", &n);
    while(n>10 || n<0){
      printf("Número inválido. Digite um numero entre 0 e 10\n");
      scanf("%d", &n);
    } 

    if(n<x){
      printf("Muito pequeno.\n");
    }
    else if (n>x){
      printf("Muito grande.\n");
    }
    else {
      printf("Correto ,numero de tentativas ate agora: %d\n",tentativas);
    }
    tentativas++;
  }while(n != x);

  return 0;
}
