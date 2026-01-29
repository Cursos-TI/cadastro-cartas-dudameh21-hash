#include <stdio.h>
int main(){
//Área para definição das variáveis para armazenar as propriedades das cidades    
    // --- VARiÁVEIS CARTA A ---
char estadoA[3];
char codigocartaA[6]; 
char nomecidadeA[50];
int quantidade_populacionalA;
float pibA;
float areaA;
int pontos_turisticosA;
float densidade_populacionalA;
float pib_per_capitaA;
int opcao;

    // --- VARIÁVEIS CARTA B ---
char estadoB[3];
char codigocartaB[6]; 
char nomecidadeB[50];
int quantidade_populacionalB;
float pibB;
float areaB;
int pontos_turisticosB;
float densidade_populacionalB;
float pib_per_capitaB;
//int opcao;

    // --- CADASTRO CARTA A ---
    printf("--- Cadastro Carta A ---\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estadoA);
    printf("Código: ");
    scanf(" %5s", codigocartaA);
    printf("Cidade: ");
    scanf(" %49s", nomecidadeA);
    printf("Quantidade populacional: ");
    scanf("%d", &quantidade_populacionalA);
    printf("Área (km²): ");
    scanf("%f", &areaA);
    printf("PIB: ");
    scanf("%f", &pibB);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosA);

    densidade_populacionalA = (float)quantidade_populacionalA / areaA;
    pib_per_capitaA = (pibA * 1000000000) / (float)quantidade_populacionalA;

    // --- CADASTRO CARTA B ---
    printf("\n--- Cadastro Carta B ---\n");
    printf("Estado (A-H): ");
    scanf("  %s", estadoB);
    printf("Código: ");
    scanf("  %s", codigocartaB);
    printf("Cidade: ");
    scanf(" %s", nomecidadeB);
    printf("Quantidade populacional: ");
    scanf("%d", &quantidade_populacionalB);
    printf("Área (km²): ");
    scanf("%f", &areaB);
    printf("PIB: ");
    scanf("%f", &pibB);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosB);

    densidade_populacionalB = (float)quantidade_populacionalB / areaB;
    pib_per_capitaB = (pibB * 1000000000) / (float)quantidade_populacionalB;

    // --- MENU INTERATIVO ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", nomecidadeA, quantidade_populacionalA);
            printf("%s: %d\n", nomecidadeB, quantidade_populacionalB);
            if (quantidade_populacionalA > quantidade_populacionalB)
             printf("Vencedor: %s\n", nomecidadeA);
            else if (quantidade_populacionalB > quantidade_populacionalA)
             printf("Vencedor: %s\n", nomecidadeB);
            else 
            printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", nomecidadeA, areaA);
            printf("%s: %.2f\n", nomecidadeB, areaB);
            if (areaA > areaB)
             printf("Vencedor: %s\n", nomecidadeA);
            else if (areaB > areaA) 
            printf("Vencedor: %s\n", nomecidadeB);
            else 
            printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nomecidadeA, pibA);
            printf("%s: %.2f\n", nomecidadeB, pibB);
            if (pibA > pibB)
             printf("Vencedor: %s\n", nomecidadeA);
            else if (pibB > pibA)
             printf("Vencedor: %s\n", nomecidadeB);
            else
             printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomecidadeA, pontos_turisticosA);
            printf("%s: %d\n", nomecidadeB, pontos_turisticosB);
            if (pontos_turisticosA > pontos_turisticosB)
             printf("Vencedor: %s\n", nomecidadeA);
            else if (pontos_turisticosB > pontos_turisticosA)
             printf("Vencedor: %s\n", nomecidadeB);
            else
             printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (REGRA INVERTIDA: Menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomecidadeA, densidade_populacionalA);
            printf("%s: %.2f hab/km²\n", nomecidadeB, densidade_populacionalB);
            if (densidade_populacionalA < densidade_populacionalB) printf("Vencedor: %s\n", nomecidadeA);
            else if (densidade_populacionalB < densidade_populacionalA) printf("Vencedor: %s\n", nomecidadeB);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
