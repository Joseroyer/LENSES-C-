#include<stdio.h>
int main()
{
	int n,d=2,primo=1,cont=0;
	scanf("%d",&n);
	if(n <=1 )
	primo=0;
	
	
	while(primo==1 && d<=n/2)
	{
		if(n%d ==0)
		primo=0;
		d=d+1;
		cont++;
	}
	if(primo==0)
	printf("%d eh primo\n",n);
	else
	printf("%d eh primo\n",n);
	
	return 0;

	
	}
