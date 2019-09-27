#include <iostream>


template <typename T>
T max (T a, T b)

{
  T result = 0;
  if (a < b) {
    result = b;
  }
  else {
    result = a;
  }
  return result;
}
   
int main (void)
{

  std::cout << max (-35,2) << std::endl;
  std::cout << max (-35.87,2.98) << std::endl;

  return 0;
}



