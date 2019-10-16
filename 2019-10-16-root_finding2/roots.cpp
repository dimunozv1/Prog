#include <iostream>
#include <cmath>

using fptr = double(double);  
double bisection(double xl, double xu, double eps, fptr f, int itermax);
double regulafalsi(double xl, double xu, double eps, fptr f, int itermax);
double fixedpoint(double x0, double eps, fptr f, fptr g, int itermax);
double newton_rhapson(double x0, double eps, fptr f, fptr dev, int itermax);
double fun(double x);
double gaux(double x);
double derivada(double x);
void error_itermax(double xr, double fxr, int itermax);

int main(void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  
  const double EPS = 1.0e-8;
  const int ITERMAX = 10000;
  
  double root = bisection(100, 200, EPS, fun, ITERMAX);
  std::cout << root << "\n";
  root = regulafalsi(100, 200, EPS, fun, ITERMAX);
  std::cout << root << "\n";
  root = fixedpoint(100, EPS, fun, gaux, ITERMAX);
  std::cout << root << "\n";
  root = newton_rhapson(100, EPS, fun, derivada, ITERMAX);
  std::cout << root << "\n";
  
  return 0;
}

double bisection(double xl, double xu, double eps, fptr f, int itermax)
{
  double xr = xl;
  int iter = 0;
  while(1) {
    xr=(xl+xu)/2;
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    else if (f(xr)*f(xl) < 0) {
      xu = xr;
    }
    else {
      xl = xr;
    }
    iter++;
    if (iter > itermax) {
      error_itermax(xr, f(xr), itermax);
      break;
    }
  }
  std::cout << "# bisection niter = " << iter << "\n";

  return xr;
}

double regulafalsi(double xl, double xu, double eps, fptr f, int itermax)
{
  double xr = xl;
  int iter = 0;
  while(1) {
    xr = xu - (f(xu)*(xl-xu))/(f(xl) -f(xu));
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    else if (f(xr)*f(xl) < 0) {
      xu = xr;
    }
    else {
      xl = xr;
    }
    iter++;
    if (iter > itermax) {
      error_itermax(xr, f(xr), itermax);
      break;
    }
  }
  std::cout << "# regula falsi niter = " << iter << "\n";

  return xr;
}

double fixedpoint(double x0, double eps, fptr f, fptr g, int itermax)
{
  double xr = x0;
  int iter = 0;
  while(1) {
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    xr = g(xr);
    iter++;
    if (iter > itermax) {
      error_itermax(xr, f(xr), itermax);
      break;
    }
  }
  std::cout << "# fixedpoint niter = " << iter << "\n";
  
  return xr;
}

double  newton_rhapson(double x0, double eps, fptr f, fptr dev, int itermax)
{
  int iter = 0;
  double xr = x0;
  while(1)
    {
      if( std::fabs(f(xr)) <= eps){
	break;
      }
      else {
	xr = xr - f(xr)/dev(xr);
      }
      iter ++;
    }
  std::cout << " # newton rhapson niter = " << iter << "\n";
  return xr;
}
  

double fun(double x)
{
  return x + 10 - x*std::cosh(50.0/x);
}
double derivada(double x)
{
    return 1 - std::cosh(50/x) + 50*std::sinh(50/x)/x;
    }

double gaux(double x)
{
  return -10 + x*std::cosh(50.0/x);
}

void error_itermax(double xr, double fxr, int itermax)
{
  std::cerr << "############################################\n";
  std::cerr << "# ERROR: max number of iterations reached.\n";
  std::cerr << "# itermax = " << itermax << "\n";
  std::cerr << "# xr = " << xr << "\n";
  std::cerr << "# f(xr) = " << fxr << "\n";
  std::cerr << "############################################\n";
}
