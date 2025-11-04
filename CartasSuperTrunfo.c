#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // cidade 1
   char estado[2][50];
   char codigo[2][50];
   char cidade[2][50];
   int populacao[2];
   float area[2];     // dois slots para area 
   float PIB[2];      // dois eslotes para o PIB 
   int pontos_turisticos[2];
  
   // Área para entrada de dados
   printf("digite o nome do estado: \n");
   scanf("  %s", estado[0]);
   
   printf("digite o codigo da carta: \n");
   scanf("  %s", codigo[0]);

   printf("digite o nome da cidade: \n");
   scanf("  %s", cidade[0]);

   printf("digite a quantidade da populacao: \n");
   scanf("  %d", &populacao[0]);

   printf("digite a area em metros quadrados: \n");
   scanf("  %f", &area[0]);

   printf("digite o PIB: \n");
   scanf("  %f", &PIB[0]);

   printf("digite a quantidade de pontos turisticos: \n");
   scanf("  %d", &pontos_turisticos[0]);


  // Área para exibição dos dados da cidade
   printf("digite o nome do estado: %s - codigo: %s \n", estado[0], codigo[0]);
   printf("digite o nome da cidade: %s - populacao: %d \n", cidade[0], populacao[0]);
   printf("digite a area em metros quadrados: %f - PIB: %f \n ", area[0], PIB[0]);
   printf("digite o numero de pontos turisticos: %d \n", pontos_turisticos[0]);
   

return 0;

}

















