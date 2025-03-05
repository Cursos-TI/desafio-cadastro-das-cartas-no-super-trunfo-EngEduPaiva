#include <stdio.h>

int main() {
    char codigo[4];
    int populacao, pontos_turisticos;
    float area;
    double pib;
    
    printf("Cadastro de Cartas do Super Trunfo - Paises\n");
    
    for (int i = 0; i < 2; i++) { // Alterado para 2 cartas
        printf("\nCadastro da carta %d:\n", i + 1);
        printf("Codigo (ex: A01, B02): ");
        scanf("%s", codigo); // Removido o '&' pois 'codigo' já é um ponteiro
        printf("Populacao:  ");
        scanf("%d", &populacao);
        printf("Area (km2):  ");
        scanf(" %f", &area);
        printf("PIB (em bilhoes):  ");
        scanf(" %lf", &pib);
        printf("Numero de pontos turisticos:  ");
        scanf(" %d", &pontos_turisticos);
        
        // Cálculo da Densidade Populacional
        float densidade_populacional = populacao / area;
        
        // Cálculo do PIB per Capita
        float pib_per_capita = (populacao > 0) ? (pib * 1e9) / populacao : 0; // PIB em reais dividido pela população
        
        printf("\nCarta %d:\n", i + 1);
        printf("Codigo: %s\n", codigo);
        printf("Populacao: %d\n", populacao);
        printf("Area: %.2f km2\n", area);
        printf("PIB: %.2lf bilhoes\n", pib);
        printf("Pontos turisticos: %d\n", pontos_turisticos);
        printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional);
        printf("PIB per Capita: %.2f\n", pib_per_capita);
    }
    
    return 0;
}