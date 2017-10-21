#include <stdio.h>
#include <math.h>

double pi(double a, double b, double t, double p)
{
    double a1;
    int n;
    while (n<10) {
        a1 = (a+b)/2;
        b = sqrt(a*b);
        t = t-(p*(pow((a-a1),2)));
        p = 2*p;
        a = a1;
        n++;
    }
    
    return;
}

int main () {
  double a, b, t, p;
  a = 1;
  b = (1 / sqrt(2));
  t = 1/4;
  p = 1;
  
  pi(a, b, t, p);
  printf("%.20f oi", pi);
  
}