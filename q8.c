#include <stdio.h>
#include <math.h>

int 
main()
{
   int n[5] = {0,0,0,0,0};
   int i;
   float s = 0;
   float m = 0;
   float dp = 0;
   
   printf("<< Média e desvio-padrão >>\n");
   
   for(i = 0; i < 5; i++)
   {
      printf("\nDigite o valor %d: ", i + 1);
      scanf("%d", &n[i]);
   }
   
   for(i = 0; i < 5; i++)
   {
      s += n[i];
   }
   
   m = s / 5.0;
   
   dp = sqrt((( pow(( n[0] - m), 2) + pow(( n[1] - m), 2) + pow(( n[2] - m), 2) + pow(( n[3] - m), 2) + pow(( n[4] - m), 2)) / 4));
   
   printf("\nA média é %.0f e o desvio-padrão é %.13f\n", m, dp);
   
return 0;
}
