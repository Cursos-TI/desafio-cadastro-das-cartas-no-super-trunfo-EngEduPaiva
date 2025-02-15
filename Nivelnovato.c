#include <stdio.h>

int main() {
    char codigo[4];
    int populacao, pontos_turisticos;
    float area;
    double pib;
    
    printf("Cadastro de Cartas do Super Trunfo - Paises\n");
    
    for (int i = 0; i < 32; i++) { // 8 estados x 4 cidades cada
        printf("\nCadastro da carta %d:\n", i + 1);
        printf("Codigo (ex: A01, B02): ");
        scanf("%s", codigo);
        printf("Populacao: ");
        scanf("%d", &populacao);
        printf("Area (km2): ");
        scanf("%f", &area);
        printf("PIB (em bilhoes): ");
        scanf("%lf", &pib);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos);
        
        printf("\nCarta %d:\nCodigo: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2lf bilhoes\nPontos turisticos: %d\n", 
               i + 1, codigo, populacao, area, pib, pontos_turisticos);
    }
    
    return 0;
}
