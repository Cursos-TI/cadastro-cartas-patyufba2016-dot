#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

// Área para definição das variáveis carta 1
char pais [30];
int populacao;
float area;
float pib;
int pontostur;
int densidadepopulacional;


// Área para definição das variáveis carta 2
char pais1[30];
int populacao1;
float area1;
float pib1;
int pontostur1;
int densidadepopulacional1;
int opcao;


// Área para entrada de dados carta 1
printf("--- CADASTRO DA CARTA 1 ---\n");
    
printf("Digite o pais :\n");
scanf("%s", pais);


printf("Digite o número de habitantes da cidade :\n");
scanf("%d", &populacao);

printf("Digite a area da cidade em quilômetros quadrados :\n");
scanf("%f", &area); 

printf("Digite o PIB da cidade :\n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos na cidade :\n");
scanf("%d", &pontostur);

densidadepopulacional = populacao / area;


// Área para entrada de dados carta 2
printf("--- CADASTRO DA CARTA 2 ---\n");
    
printf("Digite o pais :\n");
scanf("%s", pais1);

printf("Digite o número de habitantes da cidade :\n");
scanf("%d", &populacao1);

printf("Digite a area da cidade em quilômetros quadrados :\n");
scanf("%f", &area1); 

printf("Digite o PIB da cidade :\n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos na cidade :\n");
scanf("%d", &pontostur1);

densidadepopulacional1 = populacao1 / area1;

//  menu interativo
    printf("Escolha o atributo que deseja comparar: \n");
    printf("1. Compare atributos de População\n");
    printf("2. Compare atributos de áreas\n");
    printf("3. Compare atributos de pib \n");
    printf("4. Compare atributos de Pontos Turíiticos \n");
    printf("3. Compare Denisdade Demográfica \n");
    scanf("%d", &opcao);

    
    switch (opcao)
    {
    case 1 :
        printf("País %s e País %s  \n", pais,pais1);
        printf("O atributo comparado é:População \n ");
        printf("A população de %s é %d habitantes \n",pais,populacao);
        printf("A população de %s é %d habitantes \n",pais1,populacao1);
        
        if (populacao == populacao1) {
        printf("Empate!!! \n");
      } else if (populacao > populacao1)
{        printf("País %s ganhou! \n", pais);
          } else{printf("País %s ganhou! \n",pais1);}

        break;
    
    default:
    { printf("Opção inválisa");}
        break;
    }

return 0;
}