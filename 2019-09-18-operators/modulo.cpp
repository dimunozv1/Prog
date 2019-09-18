// el a%3 da el modulo de a dividido en 3 (es decir lo que sobra) de modo que cuando da 0 es un divisor de 3//
#include <iostream> 

int main(void)
{
  int  a = 0;
  std::cout << "Write a number to see if it can be divided by 3\n"; 
  std::cin >> a;
  if (a%3 == 0) {
    std::cout << "Number " << a << " can be divided by 3\n";
  }
  else {
    std::cout << "Number " << a << " cannot be divided by 3\n";
  }

  return 0;
    }
