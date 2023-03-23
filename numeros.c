#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int numm, tent, x, tentotal; //variaveis do numero mágico, tentativa, variavel para encerrar o while, contador de tentativas.
    srand(time(NULL)); //para que o numero gerado não seja sempre o mesmo ele varia pelo tempo.
    numm = rand()%10; // gera o valor aleatório no alcance de 10 números
    x, tentotal = 0; //valor da variavel para encerrar o while e o numerpo de tentativas.
    while (x < 1) //while para que mesmo se errar o processo repita até que acerte.
    {
        tentotal++; //sempre que entra no loop novamente um tentativa é adicionada
        printf("Advinhe o número magico: "); //Imprime a mensagem
        scanf("%d", &tent); //Busca na entrada do teclado pela tentativa
        if (tent == numm) // se a tentativa for igual ao número
        {
            printf("** Certo **\n"); //Imprime mensagem que está certo
            x = 1; //Atribui o valor 1 para se encerrar o while
            printf("%d é o número mágico\n", tent); //Revela qual era o número
            printf("Voce tentou %d vezes", tentotal);//Imprime o número de tentativas.
        }else if(tent > numm){ //se o número foi maior que o número gerado
            printf("Errado, muito alto\n");//Imprime que é menor do que o número digitado
        }    
        else printf("Errado, muito baixo\n");//Senão ele está abaixo.
    }
    
}