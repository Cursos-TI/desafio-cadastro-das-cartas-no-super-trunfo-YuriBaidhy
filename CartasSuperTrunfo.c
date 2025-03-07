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

    Densidade1 = (float) Populacao1 / Area1;
    Pibpercapita1 = (PIB1 * 1000000000) / (float) Populacao1;

   
    //Perguntas para a Carta 01
    printf("Carta 02\n");
    printf("Digite uma letra de 'A' a 'H' representando um dos oito estados: ");
    scanf("%s", Estado2);
    
    printf("Digite o código da carta entre as opções 01, 02 ou 03: ");
    scanf("%s", &Codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &Cidade2);
        
    printf("Digite a sua População: ");
    scanf("%d", &Populacao2); 
    
    printf("Informe a sua Área em km² ");
    scanf("%f", &Area2);
    
    printf("Informe o seu PIB: ");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turísiticos existem na cidade: ");
    scanf("%d", &Pontos2);
    printf("\n");

    Densidade2 = (float) Populacao2 / Area2;
    Pibpercapita2 = (PIB2 * 1000000000) / (float) Populacao2;


    //Após respondido o questionário, o sistema exibirá os dados de ambas as cartas na sequência.

    printf("Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s%s\n", Estado1, Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.3f bilhões de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2f\n", Pibpercapita1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s%s\n", Estado2, Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.3f bilhões de Reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2f\n", Pibpercapita2);
    printf("\n");
    

    return 0;
}
