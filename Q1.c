
#include <stdio.h>


int main(){

    int i=0;

    float p[3];
    float porcentagem[3];
    float r[3];
    float t =0;
    float premio=0;

for(i=0; i<3;i++){
        printf("Insira o valor investido pelo jogador %d:" ,i+1);
        scanf("%f",&p[i]);
    }
for(i=0; i<3;i++){
        t = t + p[i];
    }
    printf("\n Insira agora o valor do premio a ser dividido \n");
    scanf("%f",&premio);

for(i=0; i<3;i++){
        porcentagem[i] = (p[i]/t);
    }

for(i=0; i<3;i++){
        r[i] = premio*(porcentagem[i]) ;
    }

for(i=0; i<3;i++){
        printf("o jogador %d recebe R$%.2f pelo valor investido\n" ,i+1,r[i]);

    }


}
