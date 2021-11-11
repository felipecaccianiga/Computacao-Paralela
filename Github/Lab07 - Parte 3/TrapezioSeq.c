#include<stdio.h>
#include<math.h>
 
double f(double x){
  return x*x;
}
 
int main(){
  int n, i;
  double a, b, h, x, sum = 0, integral;

  printf("\nDigite o numero de intervalos: ");
  scanf("%d",&n);
  printf("\nDigite o limite inicial: ");
  scanf("%lf",&a);
  printf("\nDigite o limite final: ");
  scanf("%lf",&b);

  h = fabs(b - a) / n;
  for(i = 1; i < n; i++){
    x = a + i * h;
    sum = sum + f(x);
  }
  integral = (h / 2) * (f(a) + f(b) + 2 * sum);

  printf("\nA integral eh: %lf\n", integral);
}
