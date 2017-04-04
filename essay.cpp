#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

using namespace std;

// typedef struct person{
//     char *name;
//     int age;
//     float height;
// }person;

// void getPersonDetails(person details){
//     cout<<"Your name's "<<details.name<<" , you're "<<details.age<<" year(s) old and your height is "<<details.height<<" cm"<<endl;
// }

// void makeToLower((char*)theString){
//     int i = 0;
//     while(theString[i]){
//         theString[i] = tolower(theString[i]);
//         i++;
//     }
//     printf("%s",theString);
// }

struct product{
    float price;
    char productName[30];

    struct product *next;
};
struct product *pFirstNode = NULL;
struct product *pLastNode = NULL;

void createProduct(){

    struct product *pNewProduct = (struct product *)malloc(sizeof(struct product));

    pNewProduct->next = NULL;

    printf("Enter a product name : ");
    scanf("%s", &(pNewProduct)->productName);
    printf("Enter price : ");
    scanf("%f", &(pNewProduct)->price);

    pFirstNode = pLastNode = pNewProduct;

}

void getProduct(){
    if(pFirstNode == NULL){
        createProduct();
    }else{
        struct product *pNewProduct = (struct product *)malloc(sizeof(struct product));
        printf("Enter a product name : ");
        scanf("%s", &(pNewProduct)->productName);
        printf("Enter price : ");
        scanf("%f", &(pNewProduct)->price);
        if(pFirstNode == pLastNode){
            pFirstNode->next = pNewProduct;
            pLastNode = pNewProduct;
            pNewProduct = NULL;
        }else{
            pLastNode->next = pNewProduct;
            pNewProduct->next = NULL;
            pLastNode = pNewProduct;
        }
    }
}

void showProduct(){

    struct product *pProduct = pFirstNode;
    printf("Products stored : \n");

    while(pProduct != NULL){

        printf("%s : \t%.2f\n", pProduct->productName, pProduct->price);
        pProduct = pProduct->next;

    }
}




int main(){




    int productNumber;
    int i = 0;
    printf("Enter product number : ");
    scanf("%d", &productNumber);
    int *store = (int *)malloc(productNumber*sizeof(int));

    
    while( i < productNumber){
        getProduct();
        i++;
    }
    // if( i < productNumber && i < store[i]){
    //     getProduct();
    // }
    // for(i = 0; i < productNumber; ++i){
    //     getProduct();
    // }
    showProduct();
    free(store);




    // char *name;
    // scanf("%s", &name);
    // makeToLower(name);
    // // cout<<"Enter your name : ";
    // // cin>>name;
    // // int size = sizeof(name)/sizeof([0]);
    // // for(int i = 0; i < 100; i++){
    // //     makeToLower(name);
    // // }
    // cout<<endl;



    // char str[] = "http://www.tutorialspoint.com";
    // char ch = '.';
    // char *ret;

    // ret = strchr(str, ch);

    // printf("String after |%c| is - |%s|\n", ch, ret);



    // char Character;
    // while((Character = getchar()) != '~'){
    //     char first = strchr(Character);
    //     cout<<"First character is : "<<first<<endl;
    // }





    // person Aaron = {"Aaron Dizele", 22, 1.75};
    // getPersonDetails(Aaron);

    // int rand1 = 16, rand2 = 12;
    // printf("Random 1 : %d and Random 2 : %d\n", &rand1, &rand2);


    // int myIncrement = 1, myMultiplier = 1, finalValue = 1;
    // int myBigNumber;
    // cout<<"Enter a big number : ";
    // cin>>myBigNumber;
    // while(myIncrement < myBigNumber){
    //     myMultiplier *= 2;
    //     finalValue += myMultiplier;
    //     myIncrement++;
    // }
    // if(myBigNumber == 0 || myBigNumber == 1){
    //     cout<<"Top value : "<<myBigNumber<<endl;
    // }else{
    //     cout<<"Top value : "<<finalValue;
    // }
    // cout<<endl;




    // string Character;
    // cout<<"Write something brand new... : ";
    // cin>>Character;
    
    // // // int size = sizeof(Character)/sizeof(Character[0]);

    // string idea;

    // cout<<"Write something to compare your idea... : ";
    // cin>>idea;

    // int compare = Character.compare(idea);

    // if(compare != 0){

    //     cout<<"Your idea is original. Keep going like that..."<<endl;

    // }else{

    //     cout<<"Any one else has already the same idea than you"<<endl;

    // }
    // cout<<idea<<endl;

    
    // for(i = 0; i < size; i++){
    //     cout<<C[i]<<"\t";
    // }
    // cout<<endl;

    return 0;
}