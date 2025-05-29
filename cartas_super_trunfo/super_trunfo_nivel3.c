#include <stdio.h>

int main()
{
    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pib_per_capita1 + (1.0f / densidade1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\nResumo das Cartas:\n");

    printf("\nCarta 1:\n");
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    int v1;

    printf("\nComparação de Cartas:\n");

    v1 = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    v1 = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    v1 = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    v1 = pontos1 > pontos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    v1 = densidade1 < densidade2;
    printf("Densidade Populacional (menor vence): Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    v1 = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    v1 = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", v1 ? 1 : 2, v1);

    return 0;
}
