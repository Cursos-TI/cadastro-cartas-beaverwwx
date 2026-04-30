#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;
    char codigo1[50], codigo2[50];
    char estado1[50], estado2[50];
    char nome1[50], nome2[50];

    
    
    // carta 1
    printf("Digite o nome do primeiro estado: \n");
    scanf(" %s", &estado1);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %s", &nome1);
    
    printf("Digite o código do primeiro estado: \n");
    scanf(" %s", &codigo1);

    printf("Digite a população do primeiro estado: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área do primeiro estado: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB do primeiro estado: \n");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos do primeiro estado: \n");
    scanf(" %d", &pontos1);

    printf("\n");

    // carta 2 
      printf("Digite o nome do segundo estado: \n");
    scanf(" %s", &estado2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %s", &nome2);
    
    printf("Digite o código do segundo estado: \n");
    scanf(" %s", &codigo2);

    printf("Digite a população do segundo estado: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área do segundo estado: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB do segundo estado: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos do segundo estado: \n");
    scanf(" %d", &pontos2);

    printf("\n");

    // carta1
    printf("Dados da primeira carta: \n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);


    // carta2
    printf("\n");
    printf("Dados da segunda carta: \n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
} 
