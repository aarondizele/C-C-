#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int functionX(int x)
{
    int a = 10;
    float pi = 3.14;

    return pow(pi + (a + math.pow(x, 2)), 3)/math.ln(math.abs(x)) + 3.45*math.pow(10, -3);
}

// int functionFX(float x)
// {
//     // float x;

//     // if( x <= 2){
//     //     return 8/x;
//     // }
//     // if( (x > -2) && (x <= 0)
//     // {
//     //     return math.pow(x, 3) + 4
//     // }
//     // if(x>0){
//     //     return 4/math.pow(x, 2) + 1
//     // }
// }


int main(void)
{
	int x;
	scanf("Enter X: %d\n", &x);

    int myfunc = functionX(x);
    printf("Y equal to: %d\n",myfunc);

    // funct1 = functionX(x);
    // funct2 = functionFX(x);
	// printf("Y equal to :", funct2);


    // switch(x):
    //     case (x <= 2):
    //         printf("Answer is: %.2f", 8/x);
    //         break;
    //     case ((x > -2) && (x <= 0)):
    //         printf("Answer is: %.2f", math.pow(x, 3) + 4);
    //         break;
    //     case (x>0):
    //         printf("Answer is: %.2f", 4/math.pow(x, 2) + 1);
    //         break;

}

Laxis1994
