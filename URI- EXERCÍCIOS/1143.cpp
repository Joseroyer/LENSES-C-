#include<stdio.h>

int main ()
{
	int valor,um,dois,cubo;
	scanf("%d",&valor);
	for(um=1; um<=valor; um++)
	{
	dois=um*um;
	cubo=um*um*um;
	printf("%d %d %d\n",um,dois,cubo);
	}
	
	return(0);
}
