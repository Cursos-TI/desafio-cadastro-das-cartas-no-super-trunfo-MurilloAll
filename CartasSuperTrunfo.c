#include <stdio.h>

int main() {
    char nome[50];
    int população, código, pontos;
    float área, pib;
    
    printf ("Digite o código da cidade: \n");
    scanf ("%d", &código);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nome);
    
    printf ("Quantidade de população: \n");
    scanf ("%d", &população);

    printf ("Área total: \n");
    scanf ("%f", &área);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Quantidade de pontos turísticos: \n");
    scanf ("%d", &pontos);
    
    printf ("Codigo da cidade: %d\n", código);
    printf ("Nome da cidade: %s\n", nome);
    printf ("População: %d\n", população);
    printf ("Pontos turísticos: %d\n", pontos);
    printf ("Área total: %.0f\n", área);
    printf ("PIB: %.2f\n", pib);

    printf ("Esses são os dados de sua carta!");

    return 0;
}