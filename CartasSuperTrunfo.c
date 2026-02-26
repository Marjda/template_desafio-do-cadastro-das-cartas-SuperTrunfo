#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Declaração das variáveis da Carta 1
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da Carta 2
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados
    // =============================
    // Cadastro da Carta 1
    // =============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome do Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =============================
    // Cadastro da Carta 2
    // =============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome do Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
  // Área para exibição dos dados da cidade
    printf("\n\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    
return 0;
} 
