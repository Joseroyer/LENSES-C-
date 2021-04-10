#include <stdio.h>

main ()

{

    int N,a,b,c,d;
	a= 0; b=1; c=2; d=3;
    scanf ("%d", & N);
	while(a < N)
	{
	printf("%d %d %d PUM\n", b, c, d);	
	b = b + 4;
	c = c + 4;
	d = d + 4;
	
	a++;
   
    }
    
    return 0;
}
