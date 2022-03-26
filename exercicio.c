#include <stdio.h>

int main(void) 
{
int a, b, c, soma=0, menor, maior, n;
do{
  printf("Digite um valor para A que seja maior ou igual a 1:");
  scanf("%d",&a);
} while(a<=1);
printf("Digite um valor para B:");
scanf("%d",&b);
printf("Digite um valor para c:");
scanf("%d",&c);

if(b<=c){
  menor=b;
  maior=c;
}
else {
  menor=c;
  maior=b;
}

for(n=menor;n<maior;n++){
  if(n%a==0){
    soma+=n;
  }
}
printf("A soma de todos os inteiros entre %d e %d divisiveis por %d é:%d",menor,maior,a,soma);

return 0;
}
