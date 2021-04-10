#include<stdio.h>
#include <math.h>

int main()
{
 double a, b, c, delta;
 scanf("%lf %lf %lf", &a, &b, &c);

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
 }
 else{
  delta= sqrt((b * b) - 4 * a * c);
  printf("R1 = %.5f\nR2 = %.5f\n", ((-b + delta) / (2 * a)), ((-b - delta) / (2 * a)));
    }
 return 0;
}
