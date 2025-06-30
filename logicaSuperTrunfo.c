#include <stdio.h>
//funções adicionais
int CompararPopulacao(int ValCopiado1,int ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística Populacao

int CompararArea(float ValCopiado1,float ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística Area

int CompararPIB(float ValCopiado1,float ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística PIB

int CompararPontosTuristicos(int ValCopiado1,int ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística Pontos Turisticos

int CompararDensidadeDemografica(float ValCopiado1,float ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística Densidade Demografica

int CompararPIBPerCapita(float ValCopiado1,float ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística PIB Per Capita

int CompararSuperPoder(float ValCopiado1,float ValCopiado2){
    if(ValCopiado1 > ValCopiado2){
        return ;
    } else {
        return ;
    }
} //Retorna a comparação dos valores das cartas em relação a estatística Super Poder

//função principal
int main(){
    char estado1[50], estado2[50]; //string
    char codigocarta1[50], codigocarta2[50]; //string
    char nomedacidade1[150], nomedacidade2[150]; //string
    unsigned long int populacao1, populacao2; //numero inteiro
    int numeroponturisticos1, numeroponturisticos2; //numero inteiro
    float areakm21, areakm22; //numero decimal (com vírgula)
    float PIB1, PIB2; //numero decimal (com vírgula)
    float PIBPC1, PIBPC2; //numero decimal (com vírgula)
    float DensDem1, DensDem2; //numero decimal (com vírgula)
    float SuperPoder1, SuperPoder2; 

    printf("Registrando Dados dos estados \n");
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//-----------------------------------------------------------------------------------------------------------------------    
    printf("Carta 1: \n");
    printf("Digite um nome de um estado: \n");
    scanf("%s", estado1); //é para o Estado 

    printf("Digite uma letra maiuscula, de A a H \nColoque junto da letra um número de 01 a 04 (usando o zero no meio) \nExemplo: A01:\n");
    scanf("%s", codigocarta1); //é para o Código 

    printf("Digite o nome de uma cidade do estado, sem dar espaço: \n");
    scanf("%s", nomedacidade1); //é para o Nome da Cidade

    printf("Digite a quantidade de moradores que o estado tem: \n");
    scanf("%d", &populacao1); //é para a População

    printf("Digite, em km², o tamanho do estado: \n");
    scanf("%f", &areakm21); //é para a Área

    printf("Digite, em bilhões de R$, o PIB do estado: \n");
    scanf("%f", &PIB1); //é para o PIB

    printf("Digite quantos pontos turísticos o estado tem: \n");
    scanf("%d", &numeroponturisticos1); //é para o Número de Pontos Turísticos
//-----------------------------------------------------------------------------------------------------------------------
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//------------------------------------------------------------------------------------------------------------------------
    printf("Carta 2: \n");
    printf("Digite um nome de um estado: \n");
    scanf("%s", estado2); //é para o Estado 

    printf("Digite uma letra maiuscula, de A a H \nColoque junto da letra um número de 01 a 04 (usando o zero no meio) \nExemplo: A01:\n");
    scanf("%s", codigocarta2); //é para o Código 

    printf("Digite o nome de uma cidade do estado, sem dar espaço: \n");
    scanf("%s", nomedacidade2); //é para o Nome da Cidade

    printf("Digite a quantidade de moradores que o estado tem: \n");
    scanf("%d", &populacao2); //é para a População

    printf("Digite, em km², o tamanho do estado: \n");
    scanf("%f", &areakm22); //é para a Área

    printf("Digite, em bilhões de R$, o PIB do estado: \n");
    scanf("%f", &PIB2); //é para o PIB

    printf("Digite quantos pontos turísticos o estado tem: \n");
    scanf("%d", &numeroponturisticos2); //é para o Número de Pontos Turísticos
//------------------------------------------------------------------------------------------------------------------------
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//------------------------------------------------------------------------------------------------------------------------    
    DensDem1 = populacao1 / areakm21; //Calcula a Densidade Demográfica e entrega o resultado em habitantes por quilômetro quadrado da Carta 1
    PIBPC1 = PIB1 / populacao1; //Calcula o PIB per Capita da Carta 1 
//------------------------------------------------------------------------------------------------------------------------
    DensDem2 = populacao2 / areakm22; //Calcula a Densidade Demográfica e entrega o resultado em habitantes por quilômetro quadrado da Carta 2
    PIBPC2 = PIB2 / populacao2; //Calcula o PIB per Capita da Carta 2 
//------------------------------------------------------------------------------------------------------------------------
    SuperPoder1 = (populacao1 + areakm21 + PIB1 + numeroponturisticos1 + PIBPC1) + (DensDem1 * -1); //Super Poder da Carta 1
    SuperPoder2 = (populacao2 + areakm22 + PIB2 + numeroponturisticos2 + PIBPC2) + (DensDem2 * -1); //Super Poder da Carta 2
//------------------------------------------------------------------------------------------------------------------------ 
    printf("Carta 1 \n");
    printf("\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigocarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", areakm21);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Números de Pontos Turísticos: %d \n", numeroponturisticos1);
    printf("Densidade Demográfica: %.2f hab/km² \n", DensDem1);
    printf("PIB per Capita: %.2f reais \n", PIBPC1);
    printf("Super Poder: %.2f \n", SuperPoder1);
//------------------------------------------------------------------------------------------------------------------------
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
//------------------------------------------------------------------------------------------------------------------------
    printf("Carta 2 \n");
    printf("\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", areakm22);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Números de Pontos Turísticos: %d \n", numeroponturisticos2);
    printf("Densidade Demográfica: %.2f hab/km² \n", DensDem2);
    printf("PIB per Capita: %.2f reais \n", PIBPC2);
    printf("Super Poder: %.2f \n", SuperPoder2);  
//------------------------------------------------------------------------------------------------------------------------
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//------------------------------------------------------------------------------------------------------------------------ 
    printf("Comparação de Cartas:\n\n");
    if (populacao1 > populacao2){
        printf("População: %s venceu.\n", nomedacidade1);
    } else {
        printf("População: %s venceu.\n", nomedacidade2);        
    } // Comparando População

    if (areakm21 > areakm22){
        printf("Área: %s venceu.\n", nomedacidade1);
    } else {
        printf("Área: %s venceu.\n", nomedacidade2);        
    } // Comparando Área

    if (PIB1 > PIB2){
        printf("PIB: %s venceu.\n", nomedacidade1);
    } else {
        printf("PIB: %s venceu.\n", nomedacidade2);        
    } // Comparando PIB

    if (numeroponturisticos1 > numeroponturisticos2){
        printf("Pontos Turísticos: %s venceu.\n", nomedacidade1);
    } else {
        printf("Pontos Turísticos: %s venceu.\n", nomedacidade2);        
    } // Comparando Pontos Turísticos

    if (DensDem1 > DensDem2){
        printf("Densidade Populacional: %s venceu.\n", nomedacidade2);
    } else {
        printf("Densidade Populacional: %s venceu.\n", nomedacidade1);        
    } // Comparando Densidade Populacional

    if (PIBPC1 > PIBPC2){
        printf("PiB per Capita: %s venceu.\n", nomedacidade1);
    } else {
        printf("PiB per Capita: %s venceu.\n", nomedacidade2);        
    } // Comparando PIB per Capita

    if (SuperPoder1 > SuperPoder2){
        printf("Super Poder: %s venceu.\n", nomedacidade1);
    } else {
        printf("Super Poder: %s venceu.\n", nomedacidade2);        
    } // Comparando Super Poder
    
}