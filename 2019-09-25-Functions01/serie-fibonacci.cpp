#include <iostream>

int main(void)

{
  int N = 5;
  std::cout << fibonacci_loop(N) << std::endl;
  std::cout << fibonacci_recursive(N)<< std::endl;


  return 0;
}

int fibonacci_loop(int N)
{
  int suma = 0;
  if (N==0 or N == 1) return 1;
  int aold1 = 1, aold2 = 1, a;
  for (int ii = 3; ii <= N; ++i) {
    a = aold1 + aold 2;
    suma += a;
    aold2 = aold1;
    aold1 = a;
  }
  return suma;
}
