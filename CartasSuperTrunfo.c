#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char Estado1 [2], Estado2 [2];
    char Codigo1 [3], Codigo2 [3];
    char Cidade1 [20], Cidade2 [20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    float Densidade1, Densidade2;
    float Pibpercapita1, Pibpercapita2;
    float superpoder1, superpoder2;
    int opcao1, opcao2;

    //Primeiramente, o usuário deve responder as perguntar com os dados da cidade escolhida para "Carta 1"
    //Em seguida, o usuário responderá as perguntas com os dados da cidade escolhida para "Carta 2"

    
    //Perguntas para a Carta 01
    printf("Carta 01\n");
    printf("Digite uma letra de 'A' a 'H' representando um dos oitos estados: ");
    scanf("%s", &Estado1);
       
    printf("Digite o código da carta entre as opções 01, 02 ou 03: ");
    scanf("%s", &Codigo1);  
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &Cidade1);
        
    printf("Digite a sua População: ");
    scanf("%d", &Populacao1); 
    
    printf("Informe a sua Área em km²: ");
    scanf("%f", &Area1);

    printf("Informe o seu PIB: ");
    scanf("%f", &PIB1);
    
    printf("Quantos pontos turísiticos existem na cidade: ");
    scanf("%d", &Pontos1);
    printf("\n");

    //Para calcular a Densidade Populacional deve-se dividir a População pela Área da cidade
    //Para calcular o PIB per Capita deve-se dividir o PIB pela População da cidade
    //Em ambos os cálculos, atenta-se para realizar a conversão explicita (Casting) da Variável "Populacao1" para float

    Densidade1 = (float) Populacao1 / Area1;
    Pibpercapita1 = (PIB1) / (float) Populacao1;
 
    //Perguntas para a Carta 02
    printf("Carta 02\n");
    printf("Digite uma letra de 'A' a 'H' representando um dos oito estados: ");
    scanf("%s", Estado2);
    
    printf("Digite o código da carta entre as opções 01, 02 ou 03: ");
    scanf("%s", &Codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &Cidade2);
        
    printf("Digite a sua População: ");
    scanf("%d", &Populacao2); 
    
    printf("Informe a sua Área em km²: ");
    scanf("%f", &Area2);
    
    printf("Informe o seu PIB: ");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turísiticos existem na cidade: ");
    scanf("%d", &Pontos2);
    printf("\n");

    Densidade2 = (float) Populacao2 / Area2;
    Pibpercapita2 = (PIB2) / (float) Populacao2;

    //Após respondido o questionário, o sistema exibirá os dados de ambas as cartas na sequência.

    printf("Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s%s\n", Estado1, Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %u\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2f\n", Pibpercapita1);

    //Para calcular o valor do "SUPER PODER" da "CARTA 01", deve-se somar os valores das variáveis...
    //... "Populacao1", "Area1", "PIB1", "Pontos1", "Pibpercapita1" e o inverso (*-1) da "Densidade1" 

    superpoder1 = (float)Populacao1 + Area1 + PIB1 + Pontos1 + Pibpercapita1 + (Densidade1 * -1);

    printf("SUPER PODER CARTA 01: %.f\n", superpoder1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s%s\n", Estado2, Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %u\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2f\n", Pibpercapita2);

    //Para calcular o valor do "SUPER PODER" da "CARTA 02", deve-se somar os valores das variáveis...
    //... "Populacao2", "Area2", "PIB2", "Pontos2", "Pibpercapita2" e o inverso (*-1) da "Densidade2"   

    superpoder2 = (float)Populacao2 + Area2 + PIB2 + Pontos2 + Pibpercapita2 + (Densidade2 * -1);

    printf("SUPER PODER CARTA 02: %.f\n", superpoder2);
    printf("\n");


    //Para fazer a comparação entre as cartas de cada atributo, utilizar o operador relacional ">"
    //Se os valores das variáveis da "CARTA 01", forem maiores que os valores da "CARTA 02", o programa...
    //... retornará com a resposta "1" que significa "verdadeiro", caso contrário a resposta será "0" que...
    //... significa "falso", com exeção do atributo "Densidade Populacional" que deverá ser utilizado...
    //... o operador relacional "<", uma vez que, quanto menor for a "Densidade Populacional" melhor será...
    ///... o resultado do atributo.  

    printf("***COMPARAÇÃO ENTRE AS CARTAS***\n");
    printf("População: Carta 1 Venceu: %u\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 Venceu: %d\n", Area1 > Area2);
    printf("PIB: Carta 1 Venceu: %d\n", PIB1 > PIB2);
    printf("Número de Pontos Turísticos: Carta 1 Venceu: %d\n", Pontos1 > Pontos2);
    printf("Densidade Populacional: Carta 1 Venceu: %d\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 Venceu: %d\n", Pibpercapita1 > Pibpercapita2);
    printf("Super Poder: Carta 1 Venceu: %d \n", superpoder1 > superpoder2);
    printf("\n");

        //Menu interativo para o usuário escolher qual atributo comparar

        printf("*** ATRIBUTOS PARA COMPARAÇÃO ***\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Número de Pontos Turísticos\n");
        printf("5.Densidade Demográfica\n");
        printf("Digite o item de um dos atributos para realizar a comparação entre as cartas\n");
        scanf("%d", &opcao1);
        printf("Digite o item de um segundo atributo para realizar uma outra comparação entre as cartas\n");
        scanf("%d", &opcao2);
    
        switch (opcao1)
        {
        case 1:
            if (Populacao1 > Populacao2)
            {
            printf("%s que tem %d habitantes, venceu %s que tem %d habitantes\n", Cidade1, Populacao1, Cidade2, Populacao2);
            }
            else if (Populacao1 < Populacao2)
            {
            printf("%s que tem %d habitantes, venceu %s que tem %d habitantes\n", Cidade2, Populacao2, Cidade1, Populacao1);
            }
            else {
            printf("EMPATE no atributo População\n");
            }
            break;
    
        case 2:
            if (Area1 > Area2)
            {
            printf("%s que tem %.2f km² de Área, venceu %s que tem %.2f km² de Área\n", Cidade1, Area1, Cidade2, Area2);
            }
            else if (Area1 < Area2)
            {      
            printf("%s que tem %.2f km² de Área, venceu %s que tem %.2f km² de Área\n", Cidade2, Area2, Cidade1, Area1);
            }
            else {
            printf("EMPATE no atributo Área\n");
            }
            break;
    
        case 3:
            if (PIB1 > PIB2)
            {
            printf("%s que tem um PIB de R$ %.2f, venceu %s que tem um PIB de R$ %.2f\n", Cidade1, PIB1, Cidade2, PIB2);
            }
            else if (PIB2 < PIB1)
            {      
            printf("%s que tem um PIB de R$ %.2f, venceu %s que tem um PIB de R$ %.2f\n", Cidade2, PIB2, Cidade2, PIB2);
            }
            else {
            printf("EMPATE no atributo PIB\n");
            }
            break;
    
        case 4:
            if (Pontos1 > Pontos2)
            {
            printf("%s que tem %d Pontos Turísiticos, venceu %s que tem %d Pontos Turísticos\n", Cidade1, Pontos1, Cidade2, Pontos2);
            }
            else if (Pontos2 < Pontos1)
            {      
            printf("%s que tem %d Pontos Turísiticos, venceu %s que tem %d Pontos Turísticos\n", Cidade2, Pontos2, Cidade1, Pontos1);
            }
            else {
            printf("EMPATE no atributo Quantidade de Pontos Turísticos\n");
            }
            break;
    
        case 5:
            if (Densidade1 < Densidade2)
            {
            printf("%s que tem a Densidade Demográfica de %.2f hab/km², venceu %s que tem a Densidade Demográfica de %.2f hab/km² \n", Cidade1, Densidade1, Cidade2, Densidade2);
            }
            else if (Densidade1 > Densidade2)
            {      
            printf("%s que tem a Densidade Demográfica de %.2f hab/km², venceu %s que tem a Densidade Demográfica de %.2f hab/km²\n", Cidade2, Densidade2, Cidade1, Densidade1);
            }
            else {
            printf("EMPATE no atributo Densidade Demográfica\n");
            }
            break;
    
        default:
            printf("Opção Inválida\n");
            break;
        }
    
        switch (opcao2)
        {
        case 1:
            if (Populacao1 > Populacao2)
            {
            printf("%s que tem %d habitantes, venceu %s que tem %d habitantes\n", Cidade1, Populacao1, Cidade2, Populacao2);
            }
            else if (Populacao1 < Populacao2)
            {
            printf("%s que tem %d habitantes, venceu %s que tem %d habitantes\n", Cidade2, Populacao2, Cidade1, Populacao1);
            }
            else {
            printf("EMPATE no atributo População\n");
            }
            break;
    
        case 2:
            if (Area1 > Area2)
            {
            printf("%s que tem %.2f km² de Área, venceu %s que tem %.2f km² de Área\n", Cidade1, Area1, Cidade2, Area2);
            }
            else if (Area1 < Area2)
            {      
            printf("%s que tem %.2f km² de Área, venceu %s que tem %.2f km² de Área\n", Cidade2, Area2, Cidade1, Area1);
            }
            else {
            printf("EMPATE no atributo Área\n");
            }
            break;
    
        case 3:
            if (PIB1 > PIB2)
            {
            printf("%s que tem um PIB de R$ %.2f, venceu %s que tem um PIB de R$ %.2f\n", Cidade1, PIB1, Cidade2, PIB2);
            }
            else if (PIB2 < PIB1)
            {      
            printf("%s que tem um PIB de R$ %.2f, venceu %s que tem um PIB de R$ %.2f\n", Cidade2, PIB2, Cidade2, PIB2);
            }
            else {
            printf("EMPATE no atributo PIB\n");
            }
            break;
    
        case 4:
            if (Pontos1 > Pontos2)
            {
            printf("%s que tem %d Pontos Turísiticos, venceu %s que tem %d Pontos Turísticos\n", Cidade1, Pontos1, Cidade2, Pontos2);
            }
            else if (Pontos2 < Pontos1)
            {      
            printf("%s que tem %d Pontos Turísiticos, venceu %s que tem %d Pontos Turísticos\n", Cidade2, Pontos2, Cidade1, Pontos1);
            }
            else {
            printf("EMPATE no atributo Quantidade de Pontos Turísticos\n");
            }
            break;
    
        case 5:
            if (Densidade1 < Densidade2)
            {
            printf("%s que tem a Densidade Demográfica de %.2f hab/km², venceu %s que tem a Densidade Demográfica de %.2f hab/km² \n", Cidade1, Densidade1, Cidade2, Densidade2);
            }
            else if (Densidade1 > Densidade2)
            {      
            printf("%s que tem a Densidade Demográfica de %.2f hab/km², venceu %s que tem a Densidade Demográfica de %.2f hab/km²\n", Cidade2, Densidade2, Cidade1, Densidade1);
            }
            else {
            printf("EMPATE no atributo Densidade Demográfica\n");
            }
            break;
    
        default:
            printf("Opção Inválida\n");
            break;
        }
        printf("\n");
    

    // Para apresentar a comparação entre de um atrituto específico inforomando qual cidade venceu...
    //... utilizar a estrutura de decisão composta "if-else"

    //utilizando a estrutura de decisão composta "if-else" para apresentar a carta vencedeora no...
    //... atributo "Densidade Populacional"
    printf("Comparação entre as cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 01 - %s: %.2f hab/km²\n", Cidade1, Densidade1);
    printf("Carta 02 - %s: %.2f hab/km²\n", Cidade2, Densidade2);

        if (Densidade1 < Densidade2){
        printf("Carta 01 - RECIFE venceu\n"), Densidade1;}
        else {printf("Carta 02 - CARUARU venceu\n"), Densidade2;}
        printf("\n");

    //utilizando a estrutura de decisão composta "if-else" para apresentar a carta vencedeora no...
    //... atributo "PIB per Capita"
    printf("Comparação entre as cartas (Atributo: PIB per Capita)\n");
    printf("Carta 01 - %s: R$ %.2f\n", Cidade1, PIB1);
    printf("Carta 02 - %s: R$ %.2f\n", Cidade2, PIB2);

        if (PIB1 > PIB2){
        printf("Carta 01 - RECIFE venceu\n"), PIB1;}
        else {printf("Carta 02 - CARUARU venceu\n"), PIB2;}
        printf("\n");



    

    

    return 0;
}
