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
    printf("\tTORRE\n");
    for (int i = 0; i < torre; i++)
    {
        printf("Frente\n");
    }
    
    //MOVIMENTO DA RAINHA
    printf("\tRAINHA\n");
    for (int i = 0; i < rainha; i++)
    {
        printf("Esquerda\n");
    }
    
    //MOVIMENTO DO BISPO
    printf("\tBISPO\n");
    for (int i = 0; i < bispo; i++)
    {
        printf("Dgnl D\n");
    }
    
    //MOVIMENTO DO CAVALO
    printf("\tCAVALO\n");
    int MovCavaloH, MovCavaloV;
    //p onde o cavalo vai
    printf("Cavalo sobe ou desce?\n1-SOBE,\n2-DESCE\n");
    scanf("%i",&MovCavaloV);
    printf("Cavalo direita ou esquerda?\n1-DIREITA,\n2-ESQUERDA\n");
    scanf("%i",&MovCavaloH);

    switch (MovCavaloV)//começa o mov do cavalo
    {
    case 1:
        for (int mov = 0; mov < 1; mov++){
            for (int sobe = 0; sobe < 2; sobe++)
            {
                printf("CIMA\n");
            }
            MovCavaloH == 1? printf("DIREITA\n"): printf("ESQUERDA\n");
        }
        
        break;
    case 2:
    for (int mov = 0; mov < 1; mov++){
        for (int desce = 0; desce < 2; desce++)
        {
            printf("BAIXO\n");
        }
        MovCavaloH == 1? printf("DIREITA\n"): printf("ESQUERDA\n");
    }
        break;
    
    default:
            printf("Movimento inválido\n");
        break;
    }// fim do movimento do cavalo


}