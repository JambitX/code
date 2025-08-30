#include "stdio.h"
int main()
{
  double d;
  scanf("%lf",&d);
  printf("%f\n%.5f\n%e\n%g\n",d,d,d,d);
}