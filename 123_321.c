#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	char x[255];
	int n,i;
	
	gets(x);
	
	n=strlen(x);
	
	for(i=n-1;i>=0;i--)
		printf("%c",x[i]);


}
