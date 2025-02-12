#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar os atributos da cidade
    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas - Entrada de dados
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);
    getchar(); // Limpa o buffer
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas
    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s", nome); 
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    
    return 0;
}
