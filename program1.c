#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

#define NAME "Aaron Dizele"

int Factorial(int x){

    int n;
    if(x == 0 ) return 1;
    else n = x * Factorial(x - 1);
    return n;
}

struct product{
    
    float price;
    char productName[30];
    
};

int main(){

    int x;
    printf("What your factorial's number ? ");
    scanf("%d", &x);

    printf("Factorial of %d = %d", x, Factorial(x));

    // struct product *pProduct;
    // int i, j;
    // int numProduct;

    // printf("Enter number of product : ");
    // scanf("%d", &numProduct);

    // pProduct = (struct product *)malloc(numProduct * sizeof(struct product));

    // for(i = 0; i < numProduct; ++i){

    //     printf("Enter product name : ");
    //     scanf("%s", &(pProduct + i)->productName);
    //     printf("Enter price : ");
    //     scanf("%f", &(pProduct + i)->price);

    // }
    // printf("Products stored : \n");

    // for(j = 0; j < numProduct; ++j){
    //     printf("%s\t%.2f\n", (pProduct + j)->productName, (pProduct + j)->price);
    // }

    // free(pProduct);


    // printf("App works!!!");

    return 0;
}

