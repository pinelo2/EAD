#include <stdio.h>
#include <math.h>

int main()
{
   int x1 = 0;
   int y1 = 0;
   int x2 = 0;
   int y2 = 0;
   float d = 0;
 
   printf("Entre com a coordenada x: ");
   scanf("%d", &x2);
   printf("Entre com a coordenada y: ");
   scanf("%d", &y2);
   
   d = sqrt( pow( x2 - x1, 2) + pow( y2 - y1, 2));
   
   printf("A distancia entre os pontos (%d,%d) e (%d,%d) e %.1f\n", x2, y2, x1, y1, d);

return 0;
}
