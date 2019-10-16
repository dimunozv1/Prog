#include <cmath>
#include <iostream>

using fptr = double (double);
double regulafalsi (double xl, double xu, double eps, fptr fun);
double biseccion (double xl, double xu, double eps, fptr fun);
double funcion (double x);

int main(void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);

  const double eps = 1.0e-6;
  double root = biseccion(100, 200, eps, funcion);
  std::cout << root << "\n";
  root = regulafalsi(100, 200, eps,funcion);
  std::cout << root << "\n";
  

  return 0;
}

double biseccion (double xl, double xu, double eps, fptr fun)
{
  int iter = 0;
  double xr;
  while(fun(xl)*fun(xu) < 0)
    {
     xr = (xl + xu)/2;
    if(std::fabs(fun(xr)) <= eps){
      
      break ;
    }
    else {
      if(fun(xl)*fun(xr) < 0){
	xu = xr;
      }
      if(fun(xl)*fun(xr) > 0){
	xl = xr;
      }
    }
    iter++;
    
    }
  std::cout << "# biseccion niter = " << iter << "\n";

  return xr;
}



double regulafalsi(double xl, double xu, double eps, fptr fun)
{
  int iter=0;
  double xr;
  while(fun(xl)*fun(xu) < 0)
    {
     xr = xu - (fun(xu)*(xl-xu))/(fun(xl) -fun(xu)) ;
    if(std::fabs(fun(xr)) <= eps){
      
      break ;
    }
    else {
      if(fun(xl)*fun(xr) < 0){
	xu = xr;
      }
      if(fun(xl)*fun(xr) > 0){
	xl = xr;
      }
    }
    iter ++;
  }
  std::cout << "# regula falsi niter = " << iter << "\n";

  return xr;
}

double funcion (double x)
{
  return ((x*std::cosh(50.0/x))-x-10.0);
}

