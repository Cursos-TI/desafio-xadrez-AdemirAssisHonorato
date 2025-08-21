#include <stdio.h>

//ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE
//DESAFIO XADREZ NIVEL NOVATO

/*
Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/

int main(){

    int i = 1, b = 1, r = 1, escolha;

    printf("Qual peça o jogador deseja Moovimentar?\n");
    printf("1.Torre\n");
    printf("2.Bispo\n");
    printf("3.Rainha\n");
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
    
    default:

        printf("Alternativa inválida");

    break;
    }

    return 0;
}