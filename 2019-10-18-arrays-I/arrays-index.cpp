#include <iostream>

int main(void)
{
  int billy[10]={1};
  std::cout << billy[1] << "\n";
  billy[10] = 7 ;//  seria la casilla 11. solo hay 10 casillas (de 0 a 9).
  return 0;
}
 


//sanitizers utiles
//-fsanitize=address -fsanitize=leak -fsanitize=undefined
//tambien usar -g
//sirven para advertir de errores que el compilador no avisa
