#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=1,j;
	
	while(i<10){
		j=1;
		while(j<10){
			printf("%dx%d=%2d ",j,i,i*j);
			j++;
		}
		i++;
		printf("\n");
	}

}
