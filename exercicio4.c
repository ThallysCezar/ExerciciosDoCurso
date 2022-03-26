#include<stdio.h>
#include<conio.h>


int main (){

struct Agenda{

char nome[50];	
char email[50]; 
char telefone[50];

};
 struct Agenda contato[3];


printf("\n\tAgenda,iremos agora pedir algumas informacoes de 3 contatos,como email,o telefone e o nome completo.\n\n");
for (int c = 0; c <3; c++){
printf("\t\t\t\t\t******Contato %d******\t\t\t\t\n",c+1);

printf("Digite o nome do contato:"); 
fflush(stdin);
fgets(contato[c].nome,50,stdin); 


printf("Digite o email do contado:"); 
fflush(stdin); 
fgets(contato[c].email,50,stdin); 

printf("Digite o telefone do contato:");
fflush(stdin);
fgets(contato[c].telefone,50,stdin);
printf("\n");
}


printf("\n\n");

for (int c = 0; c <3; c++){
printf("\t\t\t\t\t******Contato %d******\t\t\t\t\n",c+1);

printf("O nome do contato e': %s",contato[c].nome); 
printf("O email do contato e': %s",contato[c].email);
printf("O telefone do contato e': %s\n",contato[c].telefone); 

}

printf("O programa Agenda será encerrado.");

return 0;

}