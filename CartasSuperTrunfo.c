#include <stdio.h>

int main() {

    //variáveis da carta 1.
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    

    //variáveis da carta 2.
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    


    //instruindo usuário - carta 1.
    printf("\ncadastro da carta 1 \n");
    printf("Digite o estado, de A-H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //instruindo usuário - carta 2.
    printf("\ncadastro da carta 2 \n");
    printf("digite o estado, de A-H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    

    //mostrando as informações das cartas.

    //carta 1.
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("população: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", (float) populacao1 / area1);
    printf("PIB per capita: %.2f\n", (float)populacao1 / pib1);
    printf("Super poder: %.2f\n\n", (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + ((float)populacao1 / pib1) - ((float)populacao1 / area1));

    //carta 2.
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("população: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", (float) populacao2 / area2);
    printf("PIB per capita: %.2f\n", (float)populacao2 / pib2);
    printf("Super poder: %.2f\n\n", (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + ((float)populacao2 / pib2) - ((float)populacao2 / area2));

    //comparação dos atributos, para reconhecer qual carta é a vencedora.

    printf("COMPARAÇÃO DE CARTAS: \n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Túristicos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("densidade populacional: %d\n", ((float) populacao1 / area1) < ((float) populacao2 / area2));
    printf("PIB per capita: %d\n", ((float)populacao1 / pib1) > ((float)populacao2 / pib2));
    printf("Super Poder: %d\n\n", (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + ((float)populacao1 / pib1) - ((float)populacao1 / area1) > (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + ((float)populacao2 / pib2) - ((float)populacao2 / area2));
    

    return 0;
}
