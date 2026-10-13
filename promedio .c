/*Guadalupe Gonzalez Nestor Federico
ejercicio 2 
  calcular  promedio*/

#include <stdio.h>

void main()
{ 

  //Declaracion variables
  float a, b, c, d, s,p;
  
  //Leer las calificaciones
  printf("dame la primer calificasion my nigga:");
  scanf("%f", &a);
  printf("dame la segunda calificacion my nigag");
  scanf("%f", &b);
  printf("dame la tercera calificasion my nigga:");
  scanf("%f", &c);
  printf("dame la cuarta calificasion");
  scanf("%f", &d);

  //calcular
  s = a + b +c +d;
  p = s /4;
    //imprimir promedio
  printf("tu promedio es de %f. /n", p);
}
