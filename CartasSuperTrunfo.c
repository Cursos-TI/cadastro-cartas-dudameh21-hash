#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 // Área para definição das variáveis para armazenar as propriedades das cidades
// carta A
char estadoA;
char codigoA[5]; 
char nomeA[50];
int populacaoA;
float pibA;
float areaA;
int pontosA;
//carta B
char estadoB;
char codigoB[5]; 
char nomeB[50];
int populacaoB;
float pibB;
float areaB;
int pontosB;
  // Área para entrada de dados
  //carta A
printf("estado(A-H): ");
scanf("%s",&estadoA);

printf("codigo da carta: ");
scanf("%s",&codigoA);

printf("nome da cidade: ");
scanf("%s",&nomeA);

printf("populacao: ");
scanf("%d",&populacaoA);

printf("pib: ");
scanf("%f",&pibA);

printf("area (em km2): ");
scanf("%f",&areaA);

printf("numero de pontos turisticos: ");
scanf("%d",&pontosA);
  
//carta B
printf("estado(A-H): ");
scanf("%s",&estadoB);

printf("codigo da carta: ");
scanf("%s",&codigoB);

printf("nome da cidade: ");
scanf("%s",&nomeB);

printf("populacao: ");
scanf("%d",&populacaoB);

printf("pib: ");
scanf("%f",&pibB);

printf("area (em km2): ");
scanf("%f",&areaB);

printf("numero de pontos turisticos: ");
scanf("%d",&pontosB);
  // Área para exibição dos dados da cidade
//carta A
printf("\n---dados da cidade registrados A---\n");
printf("estados: %c\n",estadoA);
printf("codigo:%s\n",nomeA);
printf("populacao: %d\n",populacaoA);
printf("pib:%.2f\n",pibA);
printf("area:%.2f\n",areaA);
printf("pontos turisticos:%d\n",pontosA);

//carta B
printf("\n---dados da cidade registrados B---\n");
printf("estados: %c\n",estadoB);
printf("codigo:%s\n",nomeB);
printf("populacao: %d\n",populacaoB);
printf("pib:%.2f\n",pibB);
printf("area:%.2f\n",areaB);
printf("pontos turisticos:%d\n",pontosB);
return 0;
} 
