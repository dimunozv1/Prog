#include <iostream>

int main(void)
{
  int billy[5]= {1};//el primero queda con uno y el resto queda inicilializado en 0. Si no se inicializa quedan sin valores.
  std::cout << billy[1] << "\n";
  billy[2] = 7 ;
  return 0;
}
