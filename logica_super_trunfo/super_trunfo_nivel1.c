#include <stdio.h>

int main()
{
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pib_per_capita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pib_per_capita2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das cartas
    printf("\nResumo das Cartas:\n");

    printf("\nCarta 1:\n");
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    unsigned long int atributo1 = populacao1;
    unsigned long int atributo2 = populacao2;
    char atributo_nome[] = "População";

    // Comparação e determinação do vencedor
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_nome);
    printf("\nCarta 1 - %s (%c): %lu\n", nomeCidade1, estado1, atributo1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, atributo2);

    if (atributo1 > atributo2)
    {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else if (atributo1 < atributo2)
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}