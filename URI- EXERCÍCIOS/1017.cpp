// 1017.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include<math.h>

int main()
{
	double x1, y1, x2, y2,raiz;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	raiz = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	printf("%.4f\n", raiz);
	return 0;
}

