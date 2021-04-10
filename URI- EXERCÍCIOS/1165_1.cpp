#include <stdio.h>

int main()
{
	int i,n,l=2,n1;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	scanf("%d",&n1);
		for(l=2; l<=(n1-1); l++){
			if(n1%l==0){
				printf("%d nao eh primo\n",n1);
				break;
				}
				}
					if(l==n1){
					printf("%d eh primo\n",n1);
				
					}
	}
	return 0;
}
