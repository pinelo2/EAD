/*

*/

#include <stdio.h>

int main(){

    int Vb[4] = {0,0,0,0};
    int Vd = 0;
    int i =0;
    printf("\n== Conversor de numeros binarios ==\n");

    for(i=0;i<4;i++){
        printf("Digite o %do. bit: ",i+1);
        scanf("%d",&Vb[i]);
    
    if(i==0 && Vb[i] == 1){
        Vd= Vd+1;
    }
    if(i==1&& Vb[i] == 1){
        Vd= Vd+2;
    }
    if(i==2 && Vb[i] == 1){
        Vd= Vd+4;
    }
    if(i==3 && Vb[i] == 1){
        Vd= Vd+8;
    }
    printf("\n %d \n",Vd);
    }
    
    
    printf("\n valor binario :%d%d%d%d \n valor decimal: %d",Vb[3],Vb[2],Vb[1],Vb[0] , Vd);


    
    return 0;
}
