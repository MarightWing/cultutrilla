#include <iostream>

using namespace std;

/*
 Este programa trata de sumar una lista de números.
 La lista de números aparece en la variable "vector" y el resultado
 se almacena en la variable "final".
*/

/* Suma dos números entre sí */
int suma (int x, int y)
{
   int tmp;

   tmp = x + y; 

   return tmp;
}

/* Realiza la sumatoria de un vector */
int sumatoria (float vector[], int n)
{
   int i;
   int tmp;

   tmp = 0;

   cout << "Introduzca valor entero: " << endl ;
   cin >> tmp;

   for (i = 0; i < n; i ++)
      tmp= suma(tmp, vector[i]);

   cout << "Suma = " << tmp << endl ;

   return tmp;
}

int main (void)
{
   float final;
   float vector[] = {0, 1, 2.3, 3.7, 4.10, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4};

   final = sumatoria(vector, 17);

   return 0;
}

