#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Carta Um\n");
  // Área para definição das variáveis carta 1
    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibpercapta;
    float superpoder;
    float inversodensidade;
        
        //variáveis 2
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapta1;
    float superpoder1;
    float inversodensidade1;

    //Variáveis de comparação
    int resultcomppopulacao;
    int resultcomparea;
    int resultcomppib;
    int resultcomppontostur;
    int resultcompdensidade;
    int resultcomppibpercapta; 
    int resultcompsuperpoder;  
    

    // Área para entrada de dados carta 1
  printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o nome da cidade :\n");  
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade :\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em quilômetros quadrados :\n");
    scanf("%f", &area); 

    printf("Digite o PIB da cidade :\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade :\n");
    scanf("%d", &pontos);

    // Cálculo da densidade, inverso da densidade e pib percapta da primeira carta após receber os dados
    densidade = populacao / area;   
    pibpercapta = pib / populacao; 
    inversodensidade = 1/densidade;
    superpoder = populacao+area+pib+pontos+pibpercapta+inversodensidade;;

    //Area para entrada de dados carta 2
    
    printf("Digite o nome da cidade :\n"); 
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade :\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em quilômetros quadrados :\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade :\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade :\n");
    scanf("%d", &pontos1); 
    // Cálculo da densidade,inverso da densidade,pib e superpoder percapta da segunda carta após receber os dados   

     densidade1 = populacao1 / area1;
     pibpercapta1 = pib1 / populacao1;
     inversodensidade1 = 1/densidade1;
     superpoder1 = populacao1+area1+pib1+pontos1+pibpercapta1+inversodensidade1;

     //Cálculo de dados comparativos

     resultcomppopulacao = populacao > populacao1;     
     resultcomparea = area > area1;
     resultcomppib = pib > pib1;
     resultcomppontostur = pontos > pontos1;     
     resultcompdensidade = densidade > densidade1;
     resultcomppibpercapta = pibpercapta > pibpercapta1;
     resultcompsuperpoder = superpoder > superpoder1;   

     //Exibição de informações
     printf("POPULAÇÃO: %d\n",resultcomppopulacao);
     printf("ÁREA: %d\n",resultcomparea);
     printf("PIB: %d\n",resultcomppib);
     printf("PONTOS TURÍSTICOS: %d\n",resultcomppontostur);
     printf("DENISDADE: %d\n",resultcompdensidade);
     printf("PIB PERCAPTA: %d\n",resultcomppibpercapta);
     printf("SUPERPODER: %d\n",resultcompsuperpoder);  
     
     


      return 0;
} 

     