#include <stdio.h>

int main() {
    char codigo[4];
    unsigned long int populacao; // Alterado para unsigned long int
    int pontos_turisticos;
    float area;
    double pib;

    // Variáveis para armazenar os resultados
    float densidade_populacional[2];
    float pib_per_capita[2];
    float super_poder[2];

    printf("Cadastro de Cartas do Super Trunfo - Paises\n");

    for (int i = 0; i < 2; i++) { // Cadastro de 2 cartas
        printf("\nCadastro da carta %d:\n", i + 1);
        
        printf("Codigo (ex: A01, B02): ");
        scanf("%s", codigo); // 'codigo' já é um ponteiro
        
        printf("Populacao: ");
        scanf("%lu", &populacao); // Lê como unsigned long int
        
        printf("Area (km2): ");
        scanf("%f", &area);
        
        printf("PIB (em bilhoes): ");
        scanf("%lf", &pib);
        
        printf("Numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos);
        
        // Cálculo da Densidade Populacional
        densidade_populacional[i] = populacao / area;
        
        // Cálculo do PIB per Capita
        pib_per_capita[i] = (populacao > 0) ? (pib * 1e9) / populacao : 0; // PIB em reais dividido pela população
        
        // Cálculo do Super Poder
        super_poder[i] = (float)populacao + area + pib + pontos_turisticos + pib_per_capita[i] + (1.0f / densidade_populacional[i]);
        
        // Exibição dos resultados
        printf("\nCarta %d:\n", i + 1);
        printf("Codigo: %s\n", codigo);
        printf("Populacao: %lu\n", populacao);
        printf("Area: %.2f km2\n", area);
        printf("PIB: %.2lf bilhoes\n", pib);
        printf("Pontos turisticos: %d\n", pontos_turisticos);
        printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional[i]);
        printf("PIB per Capita: %.2f\n", pib_per_capita[i]);
        printf("Super Poder: %.2f\n", super_poder[i]);
    }

    // Comparação das cartas
    printf("\nComparacao das Cartas:\n");
    
    // Comparar atributos
    for (int i = 0; i < 2; i++) {
        printf("Comparacao para Carta %d:\n", i + 1);
    
        // Comparação da população
        if (i == 0) {
            if (populacao > populacao) {
                printf("Populacao: Carta 1 vence (1)\n");
            } else {
                printf("Populacao: Carta 2 vence (0)\n");
            }
        }

        // Comparação da área
        if (i == 0) {
            if (area > area) {
                printf("Area: Carta 1 vence (1)\n");
            } else {
                printf("Area: Carta 2 vence (0)\n");
            }
        }

        // Comparação do PIB
        if (i == 0) {
            if (pib > pib) {
                printf("PIB: Carta 1 vence (1)\n");
            } else {
                printf("PIB: Carta 2 vence (0)\n");
            }
        }

        // Comparação dos pontos turísticos
        if (i == 0) {
            if (pontos_turisticos > pontos_turisticos) {
                printf("Pontos Turisticos: Carta 1 vence (1)\n");
            } else {
                printf("Pontos Turisticos: Carta 2 vence (0)\n");
            }
        }

        // Comparação do PIB per Capita
        if (i == 0) {
            if (pib_per_capita[0] > pib_per_capita[1]) {
                printf("PIB per Capita: Carta 1 vence (1)\n");
            } else {
                printf("PIB per Capita: Carta 2 vence (0)\n");}
            }
        }
    }