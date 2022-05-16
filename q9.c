/*

*/

#include <stdio.h>

int main(){

    int dif = 32;
    int i =0;
    char C[15];
    int conv = 0;

    printf("insira um nome: ");
    scanf("%s",&C);

    for(i=0;i<=15;i++){
        if(C[i] == '\0'){break;}
        conv = C[i] - 0;
        printf("%c",conv-dif);
    }


    
    return 0;
}
