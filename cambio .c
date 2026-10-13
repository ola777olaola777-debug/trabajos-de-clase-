/*Guadalupe Gonzalez Nestor Federico
ejercicio 2 
  calcular el cambio al recivir*/
#include <stdio.h>

int main()
{ //inicio
  
  //declarar variables
  int c, t, p;

  //interpretar los valores de las variables
  printf("ingresa el pago total de la vente my nigga:");
  scanf("%i", &t);
  printf("ingresa cuanto pago el nigga:");
  scanf("%i", &p);

  //calcular el cambio de regreso
  c= t - p;

  //Imprimir el cambio de regreso
  printf("el cambio del nigga es: $%i .\n " ,c);

  //fin
  return 0;
}
  
