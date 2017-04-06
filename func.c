#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main(void)
{
	int a;
	scanf("Enter X: %d\n", &a);
    

    switch(a){
        case (a <= 2):
            printf("Answer is: %d", 8/a);
            break;
        case (a > -2 && a <= 0) :
            printf("Answer is: %d", pow(a, 3) + 4);
            break;
        case (a>0) :
            printf("Answer is: %d", 4/pow(a, 2) + 1);
            break;
    }
}
