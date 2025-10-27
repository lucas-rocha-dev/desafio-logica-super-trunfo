#include <stdio.h>
    /*
    * Desafio Super Trunfo - Países
    * O programa compara as cartas usando o atributo "População" e determina a vencedora.
    */

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[15], cidade2[15];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;    
    int atributoEscolhido;

    // Cadastro das Cartas:
    printf("Digite o Estado da primeira carta:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo1);
    printf("Digite a cidade da primeira carta:\n");
    scanf("%s", cidade1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%u", &populacao1);
    printf("Digite a area da primeira cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o Estado da segunda carta:\n");
    scanf(" %c", &estado2); 
    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo2);
    printf("Digite a cidade da segunda carta:\n");
    scanf("%s", cidade2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%u", &populacao2);
    printf("Digite a area da segunda cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontosTuristicos2);

    //Calcula a Densidade Populacional
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    //Calcula o PIB Per Capita
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;


    //Menu para selecionar o atributo de comparação
    printf(" ---> Selecione o atributo para comparar as cartas: <---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    scanf("%d", &atributoEscolhido);

    //Verifica a escolha do usuário e exibe o resultado da comparação
    switch (atributoEscolhido)
    {
    case 1:
        printf(" ---- Comparação de cartas (Atributo: População) ---- \n");
        printf("Carta 1 - %s: %u\n", cidade1, populacao1);
        printf("Carta 2 - %s: %u\n", cidade2, populacao2);

        if (populacao1 > populacao2){
            printf( "A cidade vencedora é: %s\n", cidade1);
        } else if(populacao1 < populacao2) {
            printf( "A cidade vencedora é: %s\n", cidade2);

        } else {
            printf("Empate!");
        }
            
        break;
    case 2:
        printf(" ---- Comparação de cartas (Atributo: Área) ---- \n");
        printf("Carta 1 - %s: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);
        if (area1 > area2){
            printf( "A cidade vencedora é: %s\n", cidade1);
        } else if(area1 < area2) {
            printf( "A cidade vencedora é: %s\n", cidade2);

        } else {
            printf("Empate!");
        }
            
        break;
    case 3:
        printf(" ---- Comparação de cartas (Atributo: PIB) ---- \n");
        printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        if (pib1 > pib2){
            printf( "A cidade vencedora é: %s\n", cidade1);
        } else if(pib1 < pib2) {
            printf( "A cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Empate!");
        }
            
        break;
           
    case 4:
        printf(" ---- Comparação de cartas (Atributo: Pontos Turísticos) ---- \n");
        printf("Carta 1 - %s: %d\n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2){
            printf( "A cidade vencedora é: %s\n", cidade1);
        } else if(pontosTuristicos1 < pontosTuristicos2) {
            printf( "A cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Empate!");
        }
          
        break;
    case 5:
        printf(" ---- Comparação de cartas (Atributo: Densidade Populacional) ---- \n");
        printf("Carta 1 - %s: %.2f\n", cidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2){
            printf( "A cidade vencedora é: %s\n", cidade1);
        } else if(densidadePopulacional1 > densidadePopulacional2) {
            printf( "A cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Empate!");
        }
            
        break;
    case 6:
        printf(" ---- Comparação de cartas (Atributo: PIB Per Capita) ---- \n");
        printf("Carta 1 - %s: %.2f\n", cidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2){
            printf( "A cidade vencedora é: %s\n", cidade1);
        } else if(pibPerCapita1 < pibPerCapita2) {
            printf( "A cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Empate!");
        }
           
        break;  
    
    default:
        printf("Atributo inválido. Por favor, selecione um atributo válido.\n");
        break;
    }

    return 0;
}