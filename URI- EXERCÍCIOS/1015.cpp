#include<stdio.h>
#include<cmath>
int main()
{
double x1,y1,x2,y2,,raiz;
scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
raiz= (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
printf("%.4f\n",raiz); 
return 0;	
	
	
	
	
}
