//este programa suma los numeros divisibles por 3 o 5 o 7 en un intervalo m,n

#include <iostream>

int suma(int m, int n); //el punto coma debe ir aqui pero no en la de abajo, esto inicializa la funcion

int main(void)
{
  std::cout << suma(200000, 300000) << "\n";

  return 0;
}
int suma(int m, int n)
{
  int result = 0;
  for(int ii = m; ii <= n; ++ii) {
    if ( (ii%3==0) or (ii%5==0) or (ii%7==0 ) ) {
      result += ii;
    }
  }
    return result;
}
  //recordar que el porciento es el modulo, si el modulo es cero entonces el numero es divisible por 3.

  
