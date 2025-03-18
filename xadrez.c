#include <stdio.h>

//movimentação torre//
void movertorre (int casas){
    if(casas > 0){
        printf("DIREITA \n");
        movertorre (casas - 1);
    }

}
//movimentação bispo//
void moverBispo (int casas){
    if(casas > 0)
    {
        printf("CIMA\n");
        printf("DIREITA\n");
        moverBispo(casas - 1);

    }
}
//movimentação rainha//
void moverRainha (int casas){
    if (casas > 0)
    {
        printf("ESQUERDA\n");
        moverRainha(casas - 1);
    }
}
//movimentação cavalo
void moverCavalo(int casas){
    if(casas > 0)
    {
        printf("CIMA\n");
        moverCavalo(casas - 1);
    }
}
void moverCavalo2 (int casas){
    if(casas > 0)
    {
        printf("DIREITA\n");
        moverCavalo2(casas - 1);
    }
}
    int main(){
        printf("MOVIMENTAÇÂO TORRE: \n");
        movertorre(5);

        printf("MOVIMENTAÇÂO BISPO: \n");
        moverBispo(5);

        printf("MOVIMENTAÇÂO RAINHA: \n");
        moverRainha(8);

        printf("MOVIMENTAÇÂO CAVALO: \n");
        moverCavalo(2);
        moverCavalo2(1);
        return 0;
    }
