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
    float superPoder1, superPoder2;    
    char *cidadeVencedora;

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
    scanf("%d", &populacao2);
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

    // Comparação de Cartas:
    if (populacao1 > populacao2){
        cidadeVencedora = cidade1;
    } else {
        cidadeVencedora = cidade2;
    }

    // Exibi os resultados
    printf(" ---- Comparação de cartas (Atributo: População ----)\n");
    printf("Carta 1 - %s: %u\n", cidade1, populacao1);
    printf("Carta 2 - %s: %u\n", cidade2, populacao2);
    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}