#include <iostream>
int max (int a, int b);
int main (void)
{

  std::cout << max (-3,2) << std::endl;

  return 0;
}

int max (int a, int b)
{
  int result = 0;
  if (a < b) {
    result = b;
  }
  else {
    result = a;
  }
  return result;
}
    
