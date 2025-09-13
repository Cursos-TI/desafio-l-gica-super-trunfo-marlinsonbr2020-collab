#include <stdio.h>

int main(){

    char letraA = 'A';
    char letraB = 'B';
    int codigo = 01;
    char nome[50];
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    int soma, subtração, multiplicação, divisão;
    double densidade1 = populacao1 / area1;
    double capita1 = PIB1 / populacao1;
    double densidade2 = populacao2 / area2;
    double capita2 = PIB2 / populacao2;
    float super_poder1;
    float super_poder2;
    

     printf("carta n1 \n");

     printf("escolha um dos 8 estados de A a H, digite a letra; \n");
     scanf("%c", &letraA);

     printf("escolha o codigo da carta, de 01 a 04; \n");
     scanf("%d", &codigo);

     printf("digite o nome da cidade; \n");
     scanf("%s", nome);

     printf("digite o numero de habitantes;\n");
     scanf(" %f", &populacao1);

     printf("digite a area;\n");
     scanf("%f", &area1);

     printf("digite a quantidade do produto interno bruto da cidade, PIB;\n");
     scanf("%f", &PIB1);

     printf("digite a quantidade de pontos turisticos na cidade;\n");
     scanf("%d", &numero_de_pontos_turisticos1);


      printf("carta n1 \n");
      printf("estado;%c\n", letraA);
      printf("codigo;%c%.2d\n", letraA, codigo);
      printf("nome da cidade;%s\n", nome);
      printf("população;%.f\n", populacao1);
      printf("area;%.f\n", area1);
      printf("PIB;%.f bilhões de reais\n", PIB1);
      printf("numero de pontos turisticos;%d\n", numero_de_pontos_turisticos1);
      densidade1 = populacao1 / area1;
      printf("densidade populacional; %.3f\n", densidade1);
      capita1 = PIB1 / populacao1;
      printf("PIB per capita;%.3f\n", capita1);


     printf("carta n2 \n");

     printf("escolha um dos 8 estados de B a H, digite a letra;\n");
     scanf(" %c", &letraB);

     printf("escolha o codigo da carta, de 02 a 04; \n");
     scanf("%d", &codigo);

     printf("digite o nome da cidade; \n");
     scanf("%s", nome);

     printf("digite o numero de habitantes;\n");
     scanf(" %f", &populacao2);

     printf("digite a area;\n");
     scanf("%f", &area2);

     printf("digite a quantidade do produto interno bruto da cidade, PIB;\n");
     scanf("%f", &PIB2);

     printf("digite a quantidade de pontos turisticos na cidade;\n");
     scanf("%d", &numero_de_pontos_turisticos2);

      printf("carta n2 \n");
      printf("estado;%c\n", letraB);
      printf("codigo;%c%.2d\n", letraB, codigo);
      printf("nome da cidade;%s\n", nome);
      printf("população; %.f\n", populacao2);
      printf("area;%.f\n", area2);
      printf("PIB;%.f bilhões de reais\n", PIB2);
      printf("numero de pontos turisticos;%d\n", numero_de_pontos_turisticos2);
      densidade2 = populacao2 / area2;
      printf("densidade populacional; %.3f\n", densidade2);
      capita2 = PIB2 / populacao2;
      printf("PIB per capita;%.3f\n", capita2);

      super_poder1 = populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + capita1 + densidade1 / 1;
      super_poder2 = populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + capita2 + densidade2 / 1;

      printf("comparação de cartas\n");

    if(populacao1 > populacao2){
    printf("população 1 venceu\n");  
    }
    else{
    printf("populacao 2 venceu\n");  
    }

    if(area1 > area2){
    printf("area 1 venceu\n");  
    }
    else{
    printf("area 2 venceu\n");  
    }
    
    if(PIB1 > PIB2){
    printf("PIB 1 venceu\n");  
    }
    else{
    printf("PIB 2 venceu\n");  
    }

    if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
    printf("pontos turisticos 1 venceu\n");  
    }
    else{
    printf("pontos turisticos 2 venceu\n");  
    }

    if(densidade1 > densidade2){
    printf("densidade populacional 1 venceu\n");  
    }
    else{
    printf("densidade populacional 2 venceu\n");  
    }

    if(capita1 > capita2){
    printf("PIB per capita 1 venceu\n");  
    }
    else{
    printf("PIB per capita 2 venceu\n");  
    }

    if(super_poder1 > super_poder2){
    printf("super poder da carta 1 venceu\n");  
    }
    else{
    printf("super poder da carta 2 venceu\n");  
    }

    
}