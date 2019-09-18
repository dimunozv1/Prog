#include <iostream>

int main(void)

{
  std::cout << ( (5==5) && (3>6) ) << "\n";
  std::cout << ( (5==5) || (3>6) ) << "\n";
  std::cout << ( (5==5) xor (3>6) ) << "\n";

  int a = 0;
  int b = 5;
  a = (b=3,b+2);
  std::cout << a << "\n";

  return 0;
}
// && es and y retorna 0 cuando es falso es decir cuando solo uno o ninguno de  los argumentos es verdadero. retorna 1 cuando los dos argumentos son verdaderos.
//|| es or y retorna 0 cuando ninguno de los argumentos es verdadero retorna  1  cuando alguno de los argumentos es verdadero.
//xor es exclusive retorna 1 (verdadero) cuando solo 1 de los argumentos es      verdadero
