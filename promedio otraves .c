/*Guadalupe Gonzalez Nestor Federico
ejercicio 2 
  calcular  promedio*/

#include <stdio.h>

void main()
{ 

  //Declaracion variables
  float s= 0, c, p;
  int i;

  //Declarar variables
  for(i= 0; i<4; i++)
    {
      printf("oye my nigga escribe la cafificacion #i: ",(i+ 1));
        scanf("%f", &c);

      //calcular
      s = s + c;
     
    }
  //calcular
  p = s/i;
    printf("su promedio my nigga %i es de %f. /n", p);
}
