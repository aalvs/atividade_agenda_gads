#include<stdio.h>

#include<stdlib.h>

#include<strings.h>

#include<locale.h>

struct contatos{

int codigo;

char nome[50];

char telefone[15];

char email[50];

};

int main(){

int op, contador=1;

int i;

struct contatos pessoa[5];

do{

setlocale(LC_ALL, "Portuguese");

printf("    Escolha Opção do Menu  1- Cadastro    2- Pesquisar   0- Encerrar: \n\n");

printf("    Digite a Opção Desejada: \n\n ");

scanf("%d", &op);

fflush(stdin);

switch(op){

case 1:

if(contador<=5){

printf("\n\n  Cadastro  \n\n");

printf("\tCódigo: %d", contador);

printf("\n\tInforme Seu Nome: ");

fgets(pessoa[contador].nome, 50, stdin);

fflush(stdin);

printf("\tInforme Seu Telefone: ");

fgets(pessoa[contador].telefone, 15, stdin);

fflush(stdin);

printf("\tInforme Seu E-mail: ");

fgets(pessoa[contador].email, 50, stdin);

fflush(stdin);

printf("\n\n  Cadastro Realizado com Sucesso   \n\n");

contador++;

system("Pause");

system("cls");

}else{

printf("\n\n Agenda Lotada  \n\n");

system("Pause");

system("cls");

}

break;

case 2:

if(contador==1){

printf("\n\t Lista Vazia   \n\n");

system("Pause");

system("cls");

}else{

system("cls");

printf("\n\n          Resultado da Pesquisa          \n\n");

for(i=1; i<contador; i++){

printf("      Código: %d\n", i);

printf("      Nome: %s", pessoa[i].nome);

printf("      Telefone: %s", pessoa[i].telefone);

printf("      E-mail: %s\n", pessoa[i].email);

}

system("Pause");

system("cls");

}

break;

case 0:

printf("\n  Programa Finalizado    \n\n");

break;

default:

printf("\n\n       Erro: Opção Inválida             \n\n");

system("Pause");

system("cls");

}

} while(op!=0);

return(0);}
