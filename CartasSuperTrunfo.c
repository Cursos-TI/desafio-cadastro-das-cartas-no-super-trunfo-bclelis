#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    int codigo1;
    char nomeCidade1[100];
    int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // Variáveis para a Carta 2
    char estado2;
    int codigo2;
    char nomeCidade2[100];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // --- Leitura dos dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    // --- Cálculos para Carta 1 ---
    densidade1 = populacao1 / area1; // Densidade = população/área (hab/km²)
    pibPerCapita1 = pib1 / (float)populacao1; // PIB per capita = PIB / população
    
    // --- Leitura dos dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    // --- Cálculos para Carta 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    
    // --- Exibição dos dados da Carta 1 ---
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // --- Exibição dos dados da Carta 2 ---
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
