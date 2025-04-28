#include <stdio.h>
//ala dos recursivos
void bispo_mov(int mov){
    for (int v=1, h=0; mov > 0; mov--, v++){
        printf("Cima ");
        while (h < v )
        {
            printf("Direita\n");
            h++;
        }
    }
}

void torre_mov(int mov){
    if (mov > 0){
        printf("Frente\n");
        torre_mov(mov-1);
    }
}

void rainha_mov(int mov){
    if (mov > 0){
        printf("Esquerda\n");
        rainha_mov(mov-1);
    }
}


int main(){
  
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
    torre_mov(torre);
    
    //MOVIMENTO DA RAINHA
    printf("\tRAINHA\n");
    rainha_mov(rainha);
    
    //MOVIMENTO DO BISPO
    printf("\tBISPO\n");
    bispo_mov(bispo);
    
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
            for (int sobe = 0; sobe < 3; sobe++)
            {
                
                if (sobe == 2) break;
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