/*

*/

#include <stdio.h>

int main(){

    int C = 1;
    int i = 0;
    int j = 0;

    for(i=1; i<=10;i++){
        C = 1;
        for(j=1; j<=i;j++){
            C =  j*C;

        }
        
            printf("\n%d! = %d\n",i,C);

    }

    
    return 0;
}
