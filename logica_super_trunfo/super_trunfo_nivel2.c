#include <stdio.h>
#include <string.h>

int main()
{
    // Dados da Carta 1
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

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê até a quebra de linha
    getchar();

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    getchar();

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("\n");

    // Exibição dos dados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("\nResumo das Cartas:\n");

    printf("\nCarta 1:\n");
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    // Menu interativo para escolher o atributo
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Variáveis para armazenar o atributo escolhido
    double atributo1 = 0.0, atributo2 = 0.0;
    char atributo_nome[32];

    // Determinação do atributo com base na escolha
    switch (escolha)
    {
    case 1:
        atributo1 = (double)populacao1;
        atributo2 = (double)populacao2;
        snprintf(atributo_nome, sizeof(atributo_nome), "População");
        break;
    case 2:
        atributo1 = area1;
        atributo2 = area2;
        snprintf(atributo_nome, sizeof(atributo_nome), "Área");
        break;
    case 3:
        atributo1 = pib1;
        atributo2 = pib2;
        snprintf(atributo_nome, sizeof(atributo_nome), "PIB");
        break;
    case 4:
        atributo1 = densidade1;
        atributo2 = densidade2;
        snprintf(atributo_nome, sizeof(atributo_nome), "Densidade Populacional");
        break;
    case 5:
        atributo1 = pib_per_capita1;
        atributo2 = pib_per_capita2;
        snprintf(atributo_nome, sizeof(atributo_nome), "PIB per Capita");
        break;
    default:
        printf("Escolha inválida!\n");
        return 1;
    }

    // Comparação e exibição
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_nome);

    if (escolha == 1)
    {
        printf("\nCarta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);
    }
    else
    {
        printf("\nCarta 1 - %s (%c): %.2lf\n", nomeCidade1, estado1, atributo1);
        printf("Carta 2 - %s (%c): %.2lf\n", nomeCidade2, estado2, atributo2);
    }

    // Lógica de comparação
    if (escolha == 4) // Regra especial para Densidade Populacional (menor valor vence)
    {
        if (atributo1 < atributo2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (atributo1 > atributo2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
    }
    else // Regra geral (maior valor vence)
    {
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
    }

    return 0;
}