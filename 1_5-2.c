 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int i,j,x=5;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
			if(j==1)
				printf("%*d",x,j);
			else
				printf("%d",j);
		x--;
		printf("\n");		
	}

}
