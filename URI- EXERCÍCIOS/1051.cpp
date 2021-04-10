#include<stdio.h>
int main()
{
	float r,i;
	scanf("%f",&r);
	
	if(r>=0 && r<=2000.00)
	{
	i=0;
	printf("Isento\n");
	}
	else
	
	if(r>2000.01 && r<=3000.00)
	{
	i= (r-2000)* 0.08;
	printf("R$ %.2f\n",i);
	
	}
	else
	
	if(r>3000.01 && r<=4500.00)
	{
	i= ((r-3000)*0.18)+(1000*0.08);
	printf("R$ %.2f\n",i);
	
	}
	else
	
	if(r>4500.00)
	{
	i= (1000*0.08) + (1500*0.18) + ((r-4500)*0.28);
	printf("R$ %.2f\n",i);
	
	}
	return 0;
	
}
