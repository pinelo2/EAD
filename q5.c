/*

*/

#include <stdio.h>

int main(){

    int N = 0;
    int Valor = 0;
        int i =0;
    int j = 0;

    printf("\n== Numero N: ");
        scanf("%d",&N);

    for(i=1;i<=N;i++){
            printf("\n ");
        for(j=1;j<=i;j++){

            Valor++;
            printf(" %d " ,Valor);
        
        }
    }
    
    return 0;
}
