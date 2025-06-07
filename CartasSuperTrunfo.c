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
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    //carta 2.
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("população: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n\n", pontosTuristicos2);



    return 0;
}
