#include <iostream>

const double X = 5.6;
// const es para fijar una variable y que no se pueda cambiar mas adelante//

int main(void)
{
  
  double x = 7.4;
  std::cout << &x << "\n";
  { 
    double x = 7.4;
    std::cout << &x << "\n";
  }
  std::cout << &x << "\n";
  
  return 0;
}

