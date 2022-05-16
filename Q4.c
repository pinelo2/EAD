#include <stdio.h>
#include <math.h>

int main()
{
   float m = 0;
   float a = 0;
   float imc = 0;
   
   printf("Insira a massa: ");
   scanf("%f", &m);
   printf("Insira a altura: ");
   scanf("%f", &a);
   
   imc = m / ( pow (a, 2));
   printf("IMC = %.1f\n", imc);
   
   if( imc < 18.5)
      printf("Magreza\n");
   if(imc >= 18.5 && imc <= 24.9)
	  printf("SaudÃ¡vel\n");
   if(imc >= 25.0 && imc <= 29.9)
	  printf("Sobrepeso\n");
   if(imc >= 30.0 && imc <= 34.9)
      printf("Obesidade Grau I\n");
   if(imc >= 35.0 && imc <= 39.9)
      printf("Obesidade Grau II (SEVERA)\n");
   if(imc >= 40.0)
      printf("Obesidade Grau III (MORBIDA)\n");
			   

return 0;
}
