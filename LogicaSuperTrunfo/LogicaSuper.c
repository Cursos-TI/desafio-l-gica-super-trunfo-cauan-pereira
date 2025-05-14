#include <stdio.h>

    //Variáveis da Carta 1
    int main(){ 
        char estado1;                                      //Armazena a letra que represetna o estado     
        char codigo1[4];                                   //Armazena o código que representa o estado
        char nome1[20];                                    //Armazena o nome da cidade
        int populacao1;                                    //Armazena o número que representa a população da cidade
        float area1;                                       //Armazena o número que representa a área da cidade
        float pib1;                                        //Armazena o número que representa o PIB da cidade
        int pontos_turisticos1;                            //Armazena a quantidade de pontos turísticos da cidade
        float densidade_populacional1;                     //Armazena a densidade populacional da cidade dividindo a população dela pela sua área
        float pib_per_capita1;                             //Armazena o PIB Per Capita divindo o PIB pela população da cidade
        float super_poder1;                                //Armazena o super poder da carta 

    //Variáveis da Carta 2    
        char estado2;                                      //Armazena a letra que represetna o estado     
        char codigo2[4];                                   //Armazena o código que representa o estado
        char nome2[20];                                    //Armazena o nome da cidade
        int populacao2;                                    //Armazena o número que representa a população da cidade
        float area2;                                       //Armazena o número que representa a área da cidade
        float pib2;                                        //Armazena o número que representa o PIB da cidade
        int pontos_turisticos2;                            //Armazena a quantidade de pontos turísticos da cidade
        float densidade_populacional2;                     //Armazena a densidade populacional da cidade dividindo a população dela pela sua área
        float pib_per_capita2;                             //Armazena o PIB Per Capita divindo o PIB pela população da cidade
        float super_poder2;                                //Armazena o super poder da carta                               

    int main() {
    // Dados da Carta 1
        printf("Carta 1 - Insira os dados:\n");
        printf("Estado: ");
        scanf(" %c", &estado1);

        printf("Código: ");
        scanf("%s", codigo1);

        printf("Nome da cidade: ");
        scanf("%s", nome1);

        printf("População: ");
        scanf("%d", &populacao1);

        printf("Área (em Km²): ");
        scanf("%f", &area1);

        printf("PIB (em bilhões): ");
        scanf("%f", &pib1);

        printf("Pontos turísticos: ");
        scanf("%d", &pontos_turisticos1);

        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = pib1 / populacao1;

    // Dados da Carta 2
        printf("\nCarta 2 - Insira os dados:\n");
        printf("Estado: ");
        scanf(" %c", &estado2);

        printf("Código: ");
        scanf("%s", codigo2);

        printf("Nome da cidade: ");
        scanf("%s", nome2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Área (em Km²): ");
        scanf("%f", &area2);

        printf("PIB (em bilhões): ");
        scanf("%f", &pib2);

        printf("Pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);

        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;

    int opcao;

        printf("\n=== Escolha o atributo para comparação ===\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - PIB Per Capita\n");
        printf("Opção: ");
        scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nPopulação: %d vs %d\n", populacao1, populacao2);
            printf("Vencedor: %s\n", (populacao1 > populacao2) ? nome1 : (populacao2 > populacao1) ? nome2 : "Empate");
            break;
        case 2:
            printf("\nÁrea: %.2f vs %.2f\n", area1, area2);
            printf("Vencedor: %s\n", (area1 > area2) ? nome1 : (area2 > area1) ? nome2 : "Empate");
            break;
        case 3:
            printf("\nPIB: %.2f vs %.2f\n", pib1, pib2);
            printf("Vencedor: %s\n", (pib1 > pib2) ? nome1 : (pib2 > pib1) ? nome2 : "Empate");
            break;
        case 4:
            printf("\nPontos Turísticos: %d vs %d\n", pontos_turisticos1, pontos_turisticos2);
            printf("Vencedor: %s\n", (pontos_turisticos1 > pontos_turisticos2) ? nome1 : (pontos_turisticos2 > pontos_turisticos1) ? nome2 : "Empate");
            break;
        case 5:
            printf("\nDensidade Demográfica: %.2f vs %.2f\n", densidade_populacional1, densidade_populacional2);
            printf("Vencedor: %s\n", (densidade_populacional1 < densidade_populacional2) ? nome1 : (densidade_populacional2 < densidade_populacional1) ? nome2 : "Empate");
            break;
        case 6:
            printf("\nPIB Per Capita: %.2f vs %.2f\n", pib_per_capita1, pib_per_capita2);
            printf("Vencedor: %s\n", (pib_per_capita1 > pib_per_capita2) ? nome1 : (pib_per_capita2 > pib_per_capita1) ? nome2 : "Empate");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
