#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
	setlocale(LC_ALL, "Portuguese");

    // Nível Novato: Cadastro Básico
	// Declarando e iniciando variáveis.

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[25], cidade2[25];

    int pop1=0, pop2=0;
    float area1=0, area2=0;
    float pib1=0, pib2=0;
    int pontos1=0, pontos2=0;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta.\n");

    // Coletando dados da primeira carta.

    printf("\nEstado: ");
    scanf("%c", &estado1);

    printf("Código da Carta: ");
    scanf(" %[^\n]s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("População: ");
    scanf("%d", &pop1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Imprimindo resultados da Carta 1.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Coletando dados da segunda carta.

    printf("\nAgora, insira os dados da segunda carta.\n");

    printf("\nEstado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf(" %[^\n]s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf("%d", &pop2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Imprimindo resultados da Carta 2.

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

	return 0;
}
