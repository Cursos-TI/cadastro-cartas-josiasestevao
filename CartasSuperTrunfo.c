#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void limpar_buffer() {
int c;
while ((c = getchar()) != '\n' && c != EOF) {

}

}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidade 1

  printf("Insira os dados da cidade 1! \n");

  // cidade 1
   char estado[2][50];
   char codigo[2][50];
   char cidade[2][50];
   int populacao[2];
   float area[2];   
   float PIB[2];    
   int pontos_turisticos[2];
   
  // Definindo os valores para densidade populacional cidade 1:
  float populacao, area;
  float quociente = populacao / area;

   // Área para entrada de dados cidade 1
   printf("digite o nome do estado: \n");
   scanf("  %s", estado[0]);
   limpar_buffer();

   printf("digite o codigo da carta: \n");
   scanf("  %s", codigo[0]);
   limpar_buffer();

   printf("digite o nome da cidade: \n");
   scanf("  %s", cidade[0]);
   limpar_buffer();


   printf("digite a quantidade da populacao: \n");
   scanf("  %d",  &populacao[0]);
   limpar_buffer();


   printf("digite a area em metros quadrados: \n");
   scanf("  %f",  &area[0]);
   limpar_buffer();


   printf("digite o PIB: \n");
   scanf("  %f",  &PIB[0]);
   limpar_buffer();


   printf("digite a quantidade de pontos turisticos: \n");
   scanf("  %d",  &pontos_turisticos[0]);
   limpar_buffer();
  
   printf("a densidade populacional da cidade 1 é: \n")
   scanff("    %f", &quociente[0]);
   limpar_buffer();

  // Área para exibição dos dados da cidade 1
   printf("digite o nome do estado:  %s - codigo: %s \n", estado[0], codigo[0]);
   printf("digite o nome da cidade:  %s - populacao: %d \n", cidade[0], populacao[0]);
   printf("digite a area em metros quadrados:  %f - PIB: %f \n ", area[0], PIB[0]);
   printf("digite o numero de pontos turisticos:  %d \n", pontos_turisticos[0]);


   

  
  // Segue abaixo a estrutura do código para a cidade 2

  printf("Insira os dados da cidade 2! \n");

  // Área para entrada de dados da cidade 2
   printf("digite o nome do estado: \n");
   scanf("  %s", estado[1]);
   limpar_buffer();

   printf("digite o codigo da carta: \n");
   scanf("  %s", codigo[1]);
   limpar_buffer();

   printf("digite o nome da cidade: \n");
   scanf("  %s", cidade[1]);
   limpar_buffer();


   printf("digite a quantidade da populacao: \n");
   scanf("  %d",  &populacao[1]);
   limpar_buffer();


   printf("digite a area em metros quadrados: \n");
   scanf("  %f",  &area[1]);
   limpar_buffer();


   printf("digite o PIB: \n");
   scanf("  %f",  &PIB[1]);
   limpar_buffer();


   printf("digite a quantidade de pontos turisticos: \n");
   scanf("  %d",  &pontos_turisticos[1]);
   limpar_buffer();


  // Área para exibição dos dados da cidade 2
   printf("digite o nome do estado:  %s - codigo: %s \n", estado[1], codigo[1]);
   printf("digite o nome da cidade:  %s - populacao: %d \n", cidade[1], populacao[1]);
   printf("digite a area em metros quadrados:  %f - PIB: %f \n ", area[1], PIB[1]);
   printf("digite o numero de pontos turisticos:  %d \n", pontos_turisticos[1]);
   


return 0;


}

















