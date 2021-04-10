#include <stdio.h>
 
int main() 
{
	char nome;
	double salario,vendas,x,salariofinal;
	scanf("%s",&nome);
	scanf("%lf",&salario);
	scanf("&lf",&vendas);
	x= (vendas*15)/100;
	salariofinal= salario+x;
	printf("TOTAL = R$%.2f\n",salariofinal);
	return 0;
}
