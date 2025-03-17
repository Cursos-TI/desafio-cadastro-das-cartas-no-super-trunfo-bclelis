#include <stdio.h>

int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;
    int codigo1;                   // Código: número de 01 a 04
    char nomeCidade1[100];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;
    
    // --- Declaração de Variáveis para a Carta 2 ---
    char estado2;
    int codigo2;
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;
    
    // --- Leitura dos Dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Permite leitura de espaços
    
    printf("Digite a população (unsigned long int): ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    // --- Cálculos para a Carta 1 ---
    densidade1 = populacao1 / area1;                 // Densidade populacional (hab/km²)
    pibPerCapita1 = pib1 / (float)populacao1;          // PIB per capita (conversão para float)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0f / densidade1);
    
    // --- Leitura dos Dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população (unsigned long int): ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    // --- Cálculos para a Carta 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0f / densidade2);
    
    // --- Comparação de Atributos ---
    printf("\n=== Comparação de Cartas ===\n");
    
    // População: maior vence
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");
    
    // Área: maior vence
    if (area1 > area2)
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");
    
    // PIB: maior vence
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");
    
    // Pontos Turísticos: maior vence
    if (pontos1 > pontos2)
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    
    // Densidade Populacional: menor vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    
    // PIB per Capita: maior vence
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    
    // Super Poder: maior vence
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");
    
    return 0;
}
