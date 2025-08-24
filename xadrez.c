#include <stdio.h>

//ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE
//DESAFIO XADREZ NIVEL MESTRE

/*
O que você vai fazer


Você deverá modificar o programa em C, que já contém a movimentação da Torre, Bispo, Rainha e Cavalo, realizando as seguintes alterações:

 

Recursividade: Substitua os loops simples que controlam os
movimentos da Torre, Bispo e Rainha por funções recursivas.
Cada função recursiva deverá simular o movimento da respectiva
peça, imprimindo a direção correta a cada casa.
 
Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo,
utilizando loops aninhados com múltiplas variáveis e/ou condições.
Você pode usar continue e break para controlar o fluxo do loop
de forma mais precisa. O movimento do Cavalo agora será para cima
e para a direita, em "L" (duas casas para cima e uma para a direita).
 
Bispo com Loops Aninhados: O Bispo deve ser implementado com
recursividade, e também com loops aninhados, utilizando o loop
mais externo para o movimento vertical, e o mais interno para o
movimento horizontal.
*/

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita. \n");
        moverTorre(casas - 1);
    }

}

void moverBispo(int casas){
    if(casas > 0){
        printf("Cima, Direita. \n");
        moverBispo(casas -1);
    }

}

void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda. \n");
        moverRainha(casas - 1);
    }
    
}

void moverCavalo(int casas){
    int i;

    if (casas > 0){
    
        for (int c = 1; c <= 1; c++)
            {
                while (i <= 2)
                {
                    printf("Cima\n");
                    i++;
                }
                
                printf("Direita\n");
            }
            
    moverCavalo(casas -1);
    }

}


int main(){

    int escolha;

    printf("Qual peça o jogador deseja Movimentar?\n");
    printf("1.Torre\n");
    printf("2.Bispo\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n");
    printf("Escolha\n");
    scanf("%d", &escolha);

    switch (escolha){

    case 1:
   
    moverTorre(5);
        
    break;

    case 2:

    moverBispo(5);

    break;

    case 3:

    moverRainha(8);

    break;

    case 4:

    moverCavalo(1);
    
    break;
    
    default:

        printf("Alternativa inválida");

    break;
    }

    return 0;
}