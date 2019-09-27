#include <iostream>


template <typename T, typename S>
T max (T a, S b)

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
  std::cout << max (-35.8,2) << std::endl;
  std::cout << max (-35,2.9) << std::endl;

  return 0;
}



