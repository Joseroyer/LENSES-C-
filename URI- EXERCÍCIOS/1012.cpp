#include<stdio.h>
int main()
{
	
	float a,b,c,tri,cir,trap,quad,retan;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	tri=a*c/2;
	cir=3.14159*c*c;
	trap=(a+b)*c/2;
	quad=b*b;
	retan=a*b;
	
	printf("TRIANGULO: %.3f\n",tri);
	printf("CIRCULO: %.3f\n",cir);
	printf("TRAPEZIO: %.3f\n",trap);
	printf("QUADRADO: %.3f\n",quad);
	printf("RETANGULO: %.3f\n",retan);
	return 0;
	
}
