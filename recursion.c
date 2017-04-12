#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main(void){
	
	printf("Factorial 5: %d", factorial(5));
	exit(0);
}
	
