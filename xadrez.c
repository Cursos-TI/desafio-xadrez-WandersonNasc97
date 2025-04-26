#include <stdio.h>

int main(){
    /*
    CONDIÇÕES
    - PEÇAS: torre, bispo e rainha;
    - torre anda hor e verticalmente
    - bispo anda só nas diagonais
    - rainha anda tds os lados

    - bispo 5casas D
    - rainha 5c E
    - torre 5c F

    - simular mov usando printf    
    
    */
   //DECLARAÇÃO DAS VARIAVEIS
    int torre, bispo, rainha;

    //INTRO AO JOGO
    printf("===============================\n");
    printf("CHESS v1.1 by MADE Check\n");
    printf("===============================\n\n");

    //ENTRADA DOS DADOS
    printf("Quantas casas a TORRE deve andar?\n");
    scanf("%i", &torre);
    printf("Quantas casas a RAINHA deve andar?\n");
    scanf("%i", &rainha);
    printf("Quantas casas o BISPO deve andar?\n");
    scanf("%i", &bispo);


    //MOVIMENTO DA TORRE

    for (int i = 0; i < torre; i++)
    {
        printf("Frente\n");
    }
    
    //MOVIMENTO DA RAINHA

    for (int i = 0; i < rainha; i++)
    {
        printf("Esquerda\n");
    }
    
    //MOVIMENTO DO BISPO

    for (int i = 0; i < bispo; i++)
    {
        printf("Dgnl D\n");
    }
    
}