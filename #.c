#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main( ){
    int i, j, linha, coluna, contador;
    char matriz[3][3];
    
    setlocale(LC_ALL,""); /*Acentuacao*/
    
    for(i = 0; i < 3; i++){
        putchar('\n');
        for(j = 0; j < 3; j++){
            putchar('\t');
            matriz[i][j] ='.';
            printf("%c", matriz[i][j]);
        }
        putchar('\n');
        putchar('\n'); 
    {
    //primeiro jogador sempre sera "x" e o segundo sempre sera "0";
    for (contador = 0; contador < 9; contador++){
        
        /*A variacao do contador deve ser sempre 9,pois sao apenas 9 possiveis jogadas.
    }    *Se alternamos o valor de inicio do contador, deve se alterar seu limite de forma
         *diferenca permanecer sempre 9 > 9 - 9 = 9.
         *Alem disso, e necessario notar que, mais a frente, o contador e usado na definicao
         *de qual jogador ganhou, sendo portanto a alteracao aqui feita , la levada em cosideracao
         */
         
        printf("\nInsira a linha em que devera ser posto seu simbolo:\n");
        scanf("%d",&linha);
        fflush(stdout);
        linha--;
        
        printf("Insira a coluna em que devera ser posta seu simbolo:\n");
        scanf("%d",&coluna);
        fflush(stdout);
        coluna--;
        
        putchar('\n');
        if(matriz[linha][coluna] =='.'){
            
            if(contador%2){/*0 modulo por 2 dara 1 ou 0: se for 1, equivate o true e entro no tf.
                                         *se for 0 equivalete a false e entre no else*/
              matriz[linha][coluna] = 'O';
            }
            else{
                matriz[linha][coluna] = 'x';
            }
            for(i = 0; i < 3; i++){
                putchar('\n');
                for(j = 0; j< 3; j++){
                    putchar('\t');   
                    printf("%c", matriz[i][j]);
            }
            putchar('\n');
            putchar('\n');
        }
        if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] !='.')||
           (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] !='.')||
           (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] !='.')||
           (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] !='.')||
           (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] !='.')||
           (matriz[1][0] == matriz[1][0] && matriz[1][0] == matriz[1][2] && matriz[1][0] !='.')||
           (matriz[2][0] == matriz[2][0] && matriz[2][0] == matriz[2][2] && matriz[2][0] !='.')||
           (matriz[2][0] == matriz[1][0] && matriz[2][0] == matriz[0][2] && matriz[2][0] !='.')){
        
            printf("\njogador %d ganhou!", (contador%2) + 1); /*o jogador que deveria ser 0 e acrescido de 1, tornando-se jogador 1*/
            exit(0); /*o jogador que deveria ser 1 e acrescido de 1, tornando-se jogador 2*/
        } 
    }      
     else{
         printf("\nO espaco escolhido ja esta ocupado, repita a operacao para um espaco valido\n");
         contador--;
    }
}

printf("\nNinguem ganhou :();
exit(0);


