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

    // Menu interativo para escolha dos atributos
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB Per Capita\n");
    scanf("%d", &atributo1);

    do {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB Per Capita\n");
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    // Função para determinar o vencedor
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    float atributos_carta1[] = {populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1};
    float atributos_carta2[] = {populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2};

    valor1_carta1 = atributos_carta1[atributo1 - 1];
    valor1_carta2 = atributos_carta2[atributo1 - 1];
    valor2_carta1 = atributos_carta1[atributo2 - 1];
    valor2_carta2 = atributos_carta2[atributo2 - 1];

    // Comparação e soma dos atributos
    int vencedor = 0;

    if ((atributo1 == 5 && valor1_carta1 < valor1_carta2) || (atributo1 != 5 && valor1_carta1 > valor1_carta2)) vencedor++;
    if ((atributo2 == 5 && valor2_carta1 < valor2_carta2) || (atributo2 != 5 && valor2_carta1 > valor2_carta2)) vencedor++;

    printf("\n=== Resultado da Comparação ===\n");
    printf("%s vs %s\n", nome1, nome2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1_carta1, valor1_carta2);
    printf("Atributo 2: %.2f vs %.2f\n", valor2_carta1, valor2_carta2);

    if (vencedor == 2)
        printf("%s venceu!\n", nome1);
    else if (vencedor == 0)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}
