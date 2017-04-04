#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NAME aaron dizele

struct product{

    float price;
    char productName[30];

    struct product *next;

};

struct product *firstNode = NULL;
struct product *lastNode = NULL;

void createNewOne(){

    struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

    pNewStruct->next = NULL;

    printf("Enter product's name : ");
    scanf("%s", &(pNewStruct)->productName);
    printf("Enter product's price : ");
    scanf("%f", &(pNewStruct)->price);

    
    firstNode = lastNode = pNewStruct;    

}

void inputData(){

    if(firstNode == NULL){

        createNewOne();

    }else{

        struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

        printf("Enter product's name : ");
        scanf("%s", &(pNewStruct)->productName);
        printf("Enter product's price : ");
        scanf("%f", &(pNewStruct)->price);

        if(firstNode == lastNode){

            firstNode->next = pNewStruct;
            lastNode = pNewStruct;
            pNewStruct = NULL;

        }else{

            lastNode->next = pNewStruct;
            pNewStruct->next = NULL;
            lastNode = pNewStruct;

        }

    }

}

void outputData(){

    struct product *pProduct = firstNode;

    printf("\nProducts stored : \n");

    while(pProduct != NULL){

        printf("\n%s\t$%.2f\n", (*pProduct).productName, (*pProduct).price);

        pProduct = pProduct->next;
    } 
}

// struct product* searchProduct(char *productName){

//     struct product *pProductIterator = firstNode;

//     if(pProductIterator != NULL){

//         int areTheyEqual = strncmp(pProductIterator->productName, productName, 30);

//         if(!areTheyEqual){

//             printf("%s Was Found and it costs %f \n", pProductIterator->productName, pProductIterator->price);
//             return pProductIterator;
//             pProductIterator = pProductIterator->next;

//         }else{

//             printf("%s Wasn't Found \n", productName);
//             return NULL;

//         }

//     }
// }


// void getProduct(struct product *pProduct){

//     while(pProduct != NULL){

//         printf("\n%s\t$%.2f\n", (*pProduct).productName, (*pProduct).price);

//         pProduct = pProduct->next;
//     }

// }

int main(){

    int numberOfProduct;
    printf("How many product do you have? : ");
    scanf("%d", &numberOfProduct);

    int *productLoop;
    productLoop = (int *) malloc(numberOfProduct * sizeof(int));
    int i = 0;

    while(i < numberOfProduct){
        inputData();
        i++;
    }
    outputData();

    // if(outputData() == 1){

    //     char productName[30];
    //     printf("What product are you looking for ? : ");
    //     scanf("%s", &productName);

    //     searchProduct(productName);
    // }
    



    // product whisky = {"Whisky", 1.4, NULL};
    // product beer = {"Beer", 2, NULL};
    // product ananas = {"Juice Ananas", 10.5, NULL};
    // product apple = {"Juice Apple", 11.4, NULL};
    // product cooktail = {"Cooktail", 5.4, NULL};

    // whisky.next = &beer;
    // beer.next = &ananas;
    // ananas.next = &apple;
    // apple.next = &cooktail;

    // getProduct(&whisky);

  

    return 0;
}