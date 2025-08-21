#include <stdio.h>

//ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE
//DESAFIO XADREZ NIVEL NOVATO

/*

*DESAFIO NOVATO
Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

*DESAFIO AVENTUREIRO
O que você vai fazer

Você deverá implementar, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo. O Cavalo se move
duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L". Para este desafio,
o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. Você precisará usar pelo menos dois loops aninhados,
sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while, à sua escolha. Assim como nas outras peças,
você imprimirá a direção do movimento a cada casa percorrida.
*/

int main(){

    int i = 1, b = 1, r = 1, escolha;

    printf("Qual peça o jogador deseja Moovimentar?\n");
    printf("1.Torre\n");
    printf("2.Bispo\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n");
    printf("Escolha\n");
    scanf("%d", &escolha);

    switch (escolha){

    case 1:
   
    for(int i = 1; i <= 5; i++)
    {
        printf("Direita.\n", i);
    }
        
    break;

    case 2:

        while (b <= 5)
    {
        printf("Cima, Direita.\n", b);
        b++;
    }

    break;

    case 3:

        do
        {
            printf("Esquerda.\n", r);
            r++;
        } while (r <= 8);

    break;

    case 4:

        for (int c = 1; c <= 1; c++)
        {
            while (i <= 2)
            {
                printf("Baixo\n");
                i++;
            }
            
            printf("Esquerda\n");
        }


    break;
    
    default:

        printf("Alternativa inválida");

    break;
    }

    return 0;
}