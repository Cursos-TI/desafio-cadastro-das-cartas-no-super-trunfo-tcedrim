#include <stdio.h>
#include <string.h> // necessário para a inclusão de cidades com espaço no nome

int main() {
    char estado1, estado2;  // variavel dos estados somente uma letra
    char codigo1[03], codigo2[03];  // variavel char com os codigos com até 3 digitos, para que seja possivel o codigo apresentar formato 00 com caractere nulo
    char cidade1[50], cidade2[50];  // Aumentei o tamanho para nomes maiores
    int populacao1, populacao2, pontosTurismo1, pontosTurismo2; // as duas variaveis inteiras população e pontos turisticos
    float area1, area2, pib1, pib2; // as duas variaveis com casas decimais area e pib
    float densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2; // variaveis para calcular a densidade populacional e pib per capita

    printf("*** Jogo Super trunfo - Desafio Aventureiro***"); //Para ficar bonitinho
    // coleta das informações da primeira carta
    printf("Digite as informações da primeira carta\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: "); 
    scanf("%s", codigo1);

    // Modo que encontrei online para que seja possível a inserção de espaço a variavel, onde foi necessario incluir a bliblioteca strinh
    // onde o comando fgets lê a linah inserida, o sizeoff defino o tamanho maximo a ser lida e o comando stdin aguarda a inserção via teclado
    printf("Digite a cidade: ");
    getchar(); // Limpa o buffer antes do fgets
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTurismo1);

    printf("Digite a área km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB bilhões de reais: ");
    scanf("%f", &pib1);

    // coleta das informações da segunda carta
    printf("\nDigite as informações da segunda carta\n");   //incluido um \n no inicio e final para adicionar quebras de paginas e melhorar a organização
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);  

    printf("Digite a cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTurismo2);

    printf("Digite a área km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB bilhões de reais: ");
    scanf("%f", &pib2);

    // cálculo da densidade populacional e PIB per capita
    densidadePop1 = (float) populacao1 / area1; //Necessária a inclusão do float devido a população ser numero inteiro e aumentar a precisão da densidade
    pibPerCapita1 = (float) (pib1 * 10e8) / populacao1;  //Necessária a inclusão do float devido a população ser numero inteiro e aumentar a precisão do PIB Per Capita
    densidadePop2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 10e8) / populacao2;  // mutiplicação do pib por 1000000000 para conversão de bilhões de reais para reais

    // impressão dos dados da carta 01
    printf("\nCarta 1:\n"); //\n inclusos para separar a mostra de dados da coleta 
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosTurismo1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1); //incluso \n para separar as informações da carta 1 para 2, remoção de 1 \n para mantar dados da carta juntos
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1); // 2 \n para separar as cartas

    // impressão dos dados da carta 02
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontosTurismo2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    return 0;
}
