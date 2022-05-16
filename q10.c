
#include <stdio.h>

int main(){


    int matriz[6][6];

    int C = 1;
    int i = 0;
    int j = 0;

    for(i=0; i<6;i++){
        for(j=0; j<6;j++){
        
            matriz[i][j]=0;
        }
    }


    
        

    for(i=6; i>=0;i--){
        for(j=6; j>=i;j--){
        
      //  printf(" %d %d \n",i,j);
 
                matriz[i][j]=1;
            
        }
    }


    for(i=0; i<6;i++){
        matriz[i][0]=0;
        matriz[0][0]=1;
        printf("\n");
        for(j=0; j<6;j++){
        
            printf(" %d ",matriz[i][j]);

        }
    }


    
    return 0;
}
