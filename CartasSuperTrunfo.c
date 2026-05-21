#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Carta Um\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigo[5];
    char cidade;
    int populacao;
    float area;
    float pib;
    int pontos;
  // Área para entrada de dados
    printf("Digite uma letra de A a H:\n");
    scanf("%s", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 :\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade :\n");
    scanf("%s", &cidade);

    printf("Digite o número de habitantes da cidade :\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em quilômetros quadrados :\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade :\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade :\n");
    scanf("%d", &pontos);


  // Área para exibição dos dados da cidade

return 0;
} 
