#include <iostream>
#include <cmath>

using fptr = double (double);

// Esto es el puntero de la funcion, dentro de parentesis se escribe lo que recibe la funcion. Ahora se puede escribir simplemente se puede escribir fptr *nombre de la funcion*

double trapecio (double h, double x0, int n,fptr fun ); 
double function(double x);

int main (void)
{ double H = 0.01;
  
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  std::cout <<  trapecio (H  , 0.0  ,2*M_PI, function) << "\n" ;
  return 0;
}
double trapecio (double h, double x0, int n,fptr fun )
 {
   double sum = 0.0;
   double x = 0.0;
   for(int ii=1;ii<= n;++ii){
     sum += 2* fun(x0 + h*ii);
   }
   sum += fun (x0)+fun (x0+n*h);
   return sum*(h/2);
   
     


   
 }
double function( double x)
{
  return std::sin(x) ;
}





