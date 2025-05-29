#include <stdio.h>
#include <string.h>

int main()
{
    // Dados da Carta 1
    char estado1, codigo1[4], nomeCidade1[100];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Dados da Carta 2
    char estado2, codigo2[4], nomeCidade2[100];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Menu para escolha dos atributos
    int escolha1, escolha2;
    float atributo1_carta1 = 0, atributo1_carta2 = 0;
    float atributo2_carta1 = 0, atributo2_carta2 = 0;
    char atributo1_nome[32], atributo2_nome[32];

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Pontos Turísticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Determinação do primeiro atributo
    switch (escolha1)
    {
    case 1:
        atributo1_carta1 = populacao1;
        atributo1_carta2 = populacao2;
        strcpy(atributo1_nome, "População");
        break;
    case 2:
        atributo1_carta1 = area1;
        atributo1_carta2 = area2;
        strcpy(atributo1_nome, "Área");
        break;
    case 3:
        atributo1_carta1 = pib1;
        atributo1_carta2 = pib2;
        strcpy(atributo1_nome, "PIB");
        break;
    case 4:
        atributo1_carta1 = densidade1;
        atributo1_carta2 = densidade2;
        strcpy(atributo1_nome, "Densidade Populacional");
        break;
    case 5:
        atributo1_carta1 = pib_per_capita1;
        atributo1_carta2 = pib_per_capita2;
        strcpy(atributo1_nome, "PIB per Capita");
        break;
    case 6:
        atributo1_carta1 = pontosTuristicos1;
        atributo1_carta2 = pontosTuristicos2;
        strcpy(atributo1_nome, "Pontos Turísticos");
        break;
    default:
        printf("Escolha inválida!\n");
        return 1;
    }

    // Menu para escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++)
    {
        if (i != escolha1)
        {
            switch (i)
            {
            case 1:
                printf("1 - População\n");
                break;
            case 2:
                printf("2 - Área\n");
                break;
            case 3:
                printf("3 - PIB\n");
                break;
            case 4:
                printf("4 - Densidade Populacional (menor vence)\n");
                break;
            case 5:
                printf("5 - PIB per Capita\n");
                break;
            case 6:
                printf("6 - Pontos Turísticos\n");
                break;
            }
        }
    }
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    // Determinação do segundo atributo
    switch (escolha2)
    {
    case 1:
        atributo2_carta1 = populacao1;
        atributo2_carta2 = populacao2;
        strcpy(atributo2_nome, "População");
        break;
    case 2:
        atributo2_carta1 = area1;
        atributo2_carta2 = area2;
        strcpy(atributo2_nome, "Área");
        break;
    case 3:
        atributo2_carta1 = pib1;
        atributo2_carta2 = pib2;
        strcpy(atributo2_nome, "PIB");
        break;
    case 4:
        atributo2_carta1 = densidade1;
        atributo2_carta2 = densidade2;
        strcpy(atributo2_nome, "Densidade Populacional");
        break;
    case 5:
        atributo2_carta1 = pib_per_capita1;
        atributo2_carta2 = pib_per_capita2;
        strcpy(atributo2_nome, "PIB per Capita");
        break;
    case 6:
        atributo2_carta1 = pontosTuristicos1;
        atributo2_carta2 = pontosTuristicos2;
        strcpy(atributo2_nome, "Pontos Turísticos");
        break;
    default:
        printf("Escolha inválida!\n");
        return 1;
    }

    // Comparação dos atributos
    printf("\nComparação de cartas:\n");
    printf("Atributo 1 (%s):\n", atributo1_nome);
    printf("Carta 1: %.2f\n", atributo1_carta1);
    printf("Carta 2: %.2f\n", atributo1_carta2);

    printf("Atributo 2 (%s):\n", atributo2_nome);
    printf("Carta 1: %.2f\n", atributo2_carta1);
    printf("Carta 2: %.2f\n", atributo2_carta2);

    int pontos_carta1 = 0, pontos_carta2 = 0;

    // Regra para o primeiro atributo
    if (escolha1 == 4) // Densidade Populacional (menor vence)
    {
        if (atributo1_carta1 < atributo1_carta2)
            pontos_carta1++;
        else if (atributo1_carta1 > atributo1_carta2)
            pontos_carta2++;
    }
    else // Regra geral (maior vence)
    {
        if (atributo1_carta1 > atributo1_carta2)
            pontos_carta1++;
        else if (atributo1_carta1 < atributo1_carta2)
            pontos_carta2++;
    }

    // Regra para o segundo atributo
    if (escolha2 == 4) // Densidade Populacional (menor vence)
    {
        if (atributo2_carta1 < atributo2_carta2)
            pontos_carta1++;
        else if (atributo2_carta1 > atributo2_carta2)
            pontos_carta2++;
    }
    else // Regra geral (maior vence)
    {
        if (atributo2_carta1 > atributo2_carta2)
            pontos_carta1++;
        else if (atributo2_carta1 < atributo2_carta2)
            pontos_carta2++;
    }

    // Soma dos atributos
    float soma_carta1 = atributo1_carta1 + atributo2_carta1;
    float soma_carta2 = atributo1_carta2 + atributo2_carta2;

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", soma_carta1);
    printf("Carta 2: %.2f\n", soma_carta2);

    // Determinação do vencedor
    if (soma_carta1 > soma_carta2)
    {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else if (soma_carta1 < soma_carta2)
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}