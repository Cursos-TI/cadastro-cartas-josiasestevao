#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // cidade 1
   char estado[50];
   char codigo[50];
   char cidade[50];
   int populacao;
   float area;
   float PIB;
   int pontos_turisticos;
  
   // Área para entrada de dados
   printf("digite o nome do estado: \n");
   scanf("%s", &estado);
   
   printf("digite o codigo da carta: \n");
   scanf("%s", &codigo);

   printf("digite o nome da cidade: \n");
   scanf("%s", &cidade);

   printf("digite a quantidade da populacao: \n");
   scanf("%d", &populacao);

   printf("digite a area em metros quadrados: \n");
   scanf("%f", &area);

   printf("digite o PIB: \n");
   scanf("%f", &PIB);

   printf("digite a quantidade de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos);

  
  // Área para exibição dos dados da cidade
   printf("digite o nome do estado: %s - codigo: %s \n", estado, codigo);
   printf("digite o nome da cidade: %s - populacao: %d \n", cidade, populacao);
   printf("digite a area em metros quadrados: %f - PIB: %f \n", area, PIB);
   printf("digite o numero de pontos turisticos: %d \n", pontos_turisticos);
   
return 0;
} 
