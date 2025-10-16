#include <stdio.h>

int main() {

int tipoComparacao1, tipoComparacao2;
int resultado1, resultado2;
//Variaveis carta 1    

char estado1;
char codigo1[4];
char cidade1[20];
unsigned long int populacao1;
float area1;
float pib1;
int turismo1;
float densi1;


//variaveis carta 2
char estado2;
char codigo2[4];
char cidade2[20];
unsigned long int populacao2;
float area2;
float pib2;
int turismo2;
float densi2;




//Pedindo informações carta 1
printf("----- INFORMAÇÕES CARTA 1 -----\n");
printf ("\n");

printf("Digite uma letra de um estado (De A a H):");
scanf(" %c",&estado1);

printf("Digite seu código (Letra do Estado e um número de 01 a 04):");
scanf("%s",&codigo1);

printf("Digite o nome da cidade:");
scanf("%s",&cidade1);

printf("Digite o numero da população:");
scanf("%lu",&populacao1);

printf("Digite o tamanho da área (Em quilômetros quadrados):");
scanf("%f",&area1);

printf("Digite o PIB:");
scanf("%f",&pib1);

printf("Digite o numero de pontos turísticos:");
scanf("%d",&turismo1);

densi1 = (float) (populacao1 / area1);



printf("\n");

//pedindo informações carta 2

printf("----- PEDINDO INFORMAÇÕES CARTA 2 -----\n");
printf("\n");

printf("Digite uma letra de um estado (De A a H):");
scanf(" %c", &estado2);

printf("Digite seu código (Letra do Estado e um número de 01 a 04):");
scanf("%s",&codigo2);

printf("Digite o nome da cidade:");
scanf(" %s",&cidade2);

printf("Digite o numero da população:");
scanf("%lu",&populacao2);

printf("Digite o tamanho da área (Em quilômetros quadrados):");
scanf("%f",&area2);

printf("Digite o PIB:");
scanf("%f",&pib2);

printf("Digite o numero de pontos turísticos:");
scanf("%d",&turismo2);

densi2 = (float) (populacao2 / area2);

printf("\n");

//Comparação
printf("----- MENU DE COMPARAÇÃO -----\n");
printf("Você deve escolher o primeiro tipo de compração.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade demografica\n");
printf("\n");
printf("Escolha a Comparação: ");
scanf("%d", &tipoComparacao1);

printf("\n");

switch (tipoComparacao1)
{
case 1 :
    printf("Você escolheu a opção População.\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
break;

case 2 :
    printf("Você escolheu a opção Área.\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;

case 3 :
    printf("Você escolheu a opção PIB.\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

case 4 :
    printf("Você escolheu a opção Turismo.\n");
   resultado1 = turismo1 > turismo2 ? 1 : 0;
    break;

case 5 :
    printf("Você escolheu a opção Densidade.\n");
   resultado1 = densi1 < densi2 ? 1 : 0;
    break;

default:
    printf("Opção invalida!\n");
    break;
}

printf("\n");

printf("----- MENU DE COMPARAÇÃO -----\n");
printf("Você deve escolher o segundo tipo de compração.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade demografica\n");

printf("Escolha a Comparação: ");
scanf("%d", &tipoComparacao2);

printf("\n");

if (tipoComparacao1 == tipoComparacao2){
    printf("Comparação ja escolhida!");
} else {
    switch (tipoComparacao2)
{
case 1 :
    printf("Você escolheu a opção População.\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
break;

case 2 :
    printf("Você escolheu a opção Área.\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;

case 3 :
    printf("Você escolheu a opção PIB.\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;

case 4 :
    printf("Você escolheu a opção Turismo.\n");
   resultado2 = turismo1 > turismo2 ? 1 : 0;
    break;

case 5 :
    printf("Você escolheu a opção Densidade.\n");
   resultado2 = densi1 < densi2 ? 1 : 0;
    break;

default:
    printf("Opção invalida!\n");
    break;

}
}

    printf("\n");

    if(resultado1 && resultado2){
        printf("Carta 1 Ganhou!!");
    } else if(resultado1 != resultado2){
        printf("Empate!!");
    } else{
        printf("Carta 2 Ganhou!!");
    }

printf("\n");

printf("----- FIM -----");
}