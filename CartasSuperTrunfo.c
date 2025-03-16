#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int Populacao, Pontos, Cidade;
    float Area, PIB;
    char Estado;

    printf("Digite seu estado (A a H): ");
    scanf(" %c", &Estado); // Adicionado espaço antes de %c para ignorar espaços em branco

    printf("Digite sua Cidade (01 a 04): \n");
    scanf("%d", &Cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área em m2: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &Pontos);

    printf("Sua carta é: %c%02d\n", Estado, Cidade); // Ajustado para exibir Cidade com dois dígitos
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", Populacao, Area, PIB, Pontos);

    return 0;
}
