#include  <iostream>

void helloworld(int m)
{
  m=35;
  std::cout <<"Hello world from a function!\n";
}


int main(void)
{
  int m = 34;
  helloworld(m) ;
  std::cout << m << "\n";
  return 0;
}
