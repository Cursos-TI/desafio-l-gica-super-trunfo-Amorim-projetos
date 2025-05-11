#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

// Definindo a estrutura da carta
struct Carta {
    char estado[3];
    char codigo_carta[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

// Função para calcular densidade populacional
float calcular_densidade_populacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcular_pib_per_capita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Criando duas cartas de exemplo
    struct Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 700.0e9, 20};
    struct Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6000000, 1200.5, 350.0e9, 15};

    // Calculando os valores adicionais
    carta1.densidade_populacional = calcular_densidade_populacional(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.pib, carta1.populacao);

    carta2.densidade_populacional = calcular_densidade_populacional(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2.pib, carta2.populacao);

    // Escolhendo o atributo para comparação
    float atributo_carta1 = carta1.densidade_populacional;
    float atributo_carta2 = carta2.densidade_populacional;
    char atributo_nome[] = "Densidade Populacional";

    // Comparando os atributos escolhidos
    if (atributo_carta1 < atributo_carta2) {
        printf("Comparação de cartas (Atributo: %s):\n\n", atributo_nome);
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome_cidade, carta1.estado, atributo_carta1);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome_cidade, carta2.estado, atributo_carta2);
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else {
        printf("Comparação de cartas (Atributo: %s):\n\n", atributo_nome);
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome_cidade, carta1.estado, atributo_carta1);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome_cidade, carta2.estado, atributo_carta2);
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    }

    return 0;
}

