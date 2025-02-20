#include <stdio.h>
#include <string.h>

// Definindo o tamanho máximo para strings
#define MAX_CIDADE 50
#define MAX_CODIGO 5

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[MAX_CODIGO];
    char cidade[MAX_CIDADE];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta, int numero) {
    printf("\nDigite os dados da Carta %d:\n", numero);

    // Estado
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);

    // Código da Carta
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);

    // Nome da Cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->cidade);  // Lê até encontrar uma nova linha

    // População
    printf("População: ");
    scanf("%d", &carta->populacao);

    // Área
    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    // Número de Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    // Ler os dados da primeira carta
    lerCarta(&carta1, 1);

    // Ler os dados da segunda carta
    lerCarta(&carta2, 2);

    // Exibir os dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}