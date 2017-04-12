// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

// #define CODE gcc program.c -o program.x; ./program.x
#define MYNAME "Aaron Dizele"

// int globalVariable = 100;
// long int bigInt = -234567777;
// int mas[3];

// void funct(int *rand1, int *rand2) {
// 	*rand1 = rand() % 50 + 1;
// 	*rand2 = rand() % 50 + 1;

// 	printf("Random 1 : %d\n", *rand1);
// 	printf("Random 2 : %d\n", *rand2);
// }

// struct yourPersonage {
// 	const char *name;
// 	const char *surname;
// 	const int age;
// 	// const char gender;
// };

// struct Character {
// 	const char* kindOne;
// 	const char* kindTwo;
// 	const char* kindThree;
// };

// typedef struct dog {
// 	const char *name;
// 	const char *cry;
// 	const int age;
// 	const float height;

// 	struct Character meals;
// }dog;

// int func(int n)
// {
//     int i;
//     for(i=0; i < n; i++)
//         printf("%d", mas[i]);
// }

// void getInfo(struct yourPersonage person) {
// 	printf("\n");
// 	printf("Personage name : %s\n", person.name);
// 	printf("Personage surname : %s\n", person.surname);
// 	printf("Personage age : %d\n", person.age);
// 	// printf("Personage gender : %c", person.gender);
// }

// void getInfoPlus(dog theDog) {
// 	printf("\n");
// 	printf("Dog name : %s\n", theDog.name);
// 	printf("Dog crie : %s\n", theDog.cry);
// 	printf("Dog height : %d\n", theDog.height);
// 	printf("Dog age : %d\n", theDog.age);
// 	printf("Meal one of dog : %s\n", theDog.meals.kindOne);
// 	printf("Meal two of dog : %s\n", theDog.meals.kindTwo);
// 	printf("Meal three  of dog : %s\n", theDog.meals.kindThree);
// }

// void setDogHeight(dog *theDog, char* newHeight) {
// 	(*theDog).name = newHeight;
// 	printf("New Name is : %s\n", (*theDog).name);
// }

// typedef struct purchase{
//     const char* nameProduct;
//     float price;

//     struct purchase *next;
// } purchase;

// void printedLinkList(purchase *pPurchase){
//     while(pPurchase != NULL){
//         printf("A %s costs %.2f\n\n", pPurchase->nameProduct, pPurchase->price);
//     }
//     pPurchase = pPurchase->next;
// }
// void store(char* nameProduct[], int price[]){
//     int i = 0;
//     while( i < 5){
//         printf("Enter product's name: ");
//         scanf("%s", &nameProduct);
//         printf("Enter product's price: ");
//         scanf("%.2f", &price);
//         i++;
//     }
// }

// void maketoLowerCase(char *theString){
// 	int i = 0;
// 	while(theString[i]){
// 		theString[i] = tolower(theString[i]);
// 		i++;
// 	}
// 	printf("%s", theString);
// }

// void getCharInfo(){
// 	char theChar;

// 	while((theChar = getchar()) != '\n'){
// 		printf("Letter or Number %d\n\n", isalnum(theChar));
// 		printf("LowerCase %d\n\n", islower(theChar));
// 		printf("Uppercase %d\n\n", isupper(theChar));
// 		printf("Punctuation %d\n\n", ispunct(theChar));
// 		printf("Number Char %d\n\n", isdigit(theChar));
// 		printf("Any space %d\n\n", isspace(theChar));
// 		// printf("Letter or Number %d\n\n", isalnum(theChar));
// 	}
// }


// struct product{
// 	char productName[30];
// 	float price;
// };

struct product { 
	float price; 
	char productName[30]; 
	
	struct product *next;
}; 

// To traverse the struct linked list I just need to
// track the first and last node in the list

struct product *pFirstNode = NULL;
struct product *pLastNode = NULL;

void createNewList(){

	// Set aside enough space in memory for this struct

	struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));
		
	// We can assign the value directly for the structs 
	// reference for the next struct in the linked list
		
	pNewStruct->next = NULL;
	
	printf("Enter Product Name: ");
	
	// The & is needed only because scanf() is used
	
	scanf("%s", &(pNewStruct)->productName);
	
	printf("Enter Product Price: ");
		
	scanf("%f", &(pNewStruct)->price);
	
	// When the first struct is created all of the following
	// refer to the same struct
	
	pFirstNode = pLastNode = pNewStruct;

}

void inputData(){

	if(pFirstNode == NULL){
	
		createNewList();
	
	} else {
	
		// Set aside enough space in memory for this struct
	
		struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));
	
		printf("Enter Product Name: ");
	
		// The & is needed only because scanf() is used
	
		scanf("%s", &(pNewStruct)->productName);
	
		printf("Enter Product Price: ");
		
		scanf("%f", &(pNewStruct)->price);
	
		// If the first and last struct are equal we know this
		// is the second struct in the list
	
		if(pFirstNode == pLastNode){
		
			// Assign the value of next for the first struct to
			// this new one since the new one is the second struct
		
			pFirstNode->next = pNewStruct;
			
			// Since this is the second struct we know the last 
			// struct is equal to this new one
			
			pLastNode = pNewStruct;
			
			// Since this is the last struct in the list it has
			// NULL stored in its next
			
			pNewStruct->next = NULL;
		
		} else {
		
			// We know that this is at least the third struct in the
			// list so we don't need to touch the pFirstNode.
			// We instead just change the pLastNode value for next
			// from NULL to our new struct 
		
			pLastNode->next = pNewStruct;
			
			pNewStruct->next = NULL;
			
			pLastNode = pNewStruct;
		
		}
	
	}

}

void outputData(){

	// This temporarily takes the location of the structs in the 
	// linked list as we cycle through them to the end
	
	struct product *pProducts = pFirstNode;

	printf("\nProducts Entered\n\n");
	
	// Until the ptr reaches a value of NULL for next we'll
	// keep printing out values
	
	while(pProducts != NULL){
	
		printf("%s costs $%.2f\n\n", pProducts->productName, pProducts->price);
		// Switch to the next struct in the list
		
		pProducts = pProducts->next;
	
	}

}


int main()
{
	int amtOfNumToStore;
	int i = 0;

	printf("How many products do you wanna store : ");
	scanf("%d", &amtOfNumToStore);

	 int *pRandom = (int *) malloc(amtOfNumToStore * sizeof(int));
	
	while(i < amtOfNumToStore){
		inputData();
		i++;
	}

	outputData();
	free(pRandom);
	

	/*
	===============================================================
	Memory allocation with struct
	===============================================================
	*/
	// struct product *pProducts;

	// int i, j;

	// int numOfProducts;

	// printf("How many products do you have? \n");

	// scanf("%d", &numOfProducts);

	// pProducts = (struct product *) malloc(numOfProducts * sizeof(struct product));

	// for(i = 0; i < numOfProducts; ++i){
	// 	printf("Enter product name : \n");
	// 	scanf("%s", &(pProducts+i)->productName);
	// 	printf("Enter product price : \n");
	// 	scanf("%f", &(pProducts+i)->price);
	// }

	// printf("\nYou stored on shop : \n");

	// for(j=0; j < numOfProducts; ++j){
	// 	printf("%s\t%.2f\n", (pProducts+j)->productName, (pProducts+j)->price);
	// }

	// free(pProducts);

	/*
	===============================================================
	Memory allocation with struct
	===============================================================
	*/

	




	// getCharInfo();
	/*
	===============================================================
	Memory allocation
	===============================================================
	*/
	// int amtOfNumToStore;
	// printf("How many numbers do you wanna store : ");
	// scanf("%d", &amtOfNumToStore);

	// int *pRandNum;
	// pRandNum = (int *) malloc(amtOfNumToStore * sizeof(int));

	// if(pRandNum != NULL){
	// 	int i = 0;

	// 	printf("Enter a number or quit: ");
		
	// 	while(i < amtOfNumToStore && scanf("%d", &pRandNum[i]) == 1){
	// 		printf("Enter a number or quit: ");
	// 		i++;
	// 	}
	// 	printf("\nYou entered the following numbers: \n");
	// 	for(int j = 0; j < i; j++){
	// 		printf("%d\n", pRandNum[j]);
	// 	}
	// }

	// free(pRandNum);

	/*
	===============================================================
	
	===============================================================
	*/




	// _Bool isNum;
	// int number;
	// int sumOfNum = 0;

	// printf("What's the number? ");
	// isNum = (scanf("%d", &number) == 1 ); // 1 = true

	// while(isNum){
	// 	sumOfNum += number;
	// 	printf("What's the number? ");
	// 	isNum = (scanf("%d", &number) == 1 ); // 1 = true
	// }
	// printf("The sum of number equals to : %d \n\n", sumOfNum);

	// char theCar[20];

	// while((theCar = getchar()) != '~'){ 
	// 	putchar(theCar);
	// }
	// printf("What's your name? ");

	// gets(theCar);
	// puts("Hi ");
	// puts(theCar);

	// fgets(theCar, 20, stdin);
	// fputs("Hi ", stdout);
	// fputs(theCar, stdout);

	// maketoLowerCase(theCar);

	



	// typedef union{
	// 	short individual;
	// 	float pound;
	// 	float ounce;
	// } amount;

	// amount orangeAmt = { .ounce = 16.4 };
	// orangeAmt.individual = 4;
    // orangeAmt.pound = 1.5;

	// printf("Anana Juice Amount: %.2f : Size = %d\n\n", orangeAmt.ounce,
	// 	sizeof(orangeAmt.ounce));
    // printf("%d : %d : %d\n\n", &orangeAmt.ounce,
	// 	&orangeAmt.individual, &orangeAmt.pound);


    // typedef struct {
    //     char* brand;
    //     amount theAmount;
    //     quantity theQuantity;
    // } theProduct;

    // theProduct orangeProduct = {"Chikita", .theAmount.ounce = 12.3};
    // printf("The %s costs $%.2f\n", orangeProduct.brand,orangeProduct.theAmount.ounce );    

    // typedef enum{ INDIV, OUNCE, POUND} quantity;

    // quantity quantType = INDIV;



	// float person = 12;
	// printf("Size of person equals to : %d\n", sizeof(person));



	// struct yourPersonage spiderman = { "Nick Canon", "Alvin Johnson", 32 };
	// getInfo(spiderman);

	// dog milou = { "Milou", "Houuu", 2, 1.45,{ "Milk", "Meat", "Vegetable" } };
	// getInfoPlus(milou);

	// printf("Old name: %s\n", milou.name);

	// setDogHeight(&milou, "Tintin");


	// printf("New Height is : %d", milou.height);


	// int random1 = 0, random2 = 0;
	// funct(&random1, &random2);
	/*
	================================
	================================
	*/

	// int k=0;
	// scanf("%d\n\n", k);
	// func(k);

	// char n;
	// long long a, b, c, d;
	// float real_number;
	// scanf("%lld %lld %lld %.2f", &a, &b, &c);

	// d = (a*b)/c;
	// int a = 10, b = 50;

	// char string[10];
	// printf("What's your name?\n");
	// scanf("%s", &string);
	// printf("My name's : %s\n", string);

	// printf("Division equals to: %.2f", (float) a / b);
	// int num1 = 25, num2 = 40;
	// printf("Is equal ? : %d\n", num1 == num2);
	// int a = sizeof(int);
	// printf("%d", a);

	// int custAge = 23;
	// char* legalAge = (custAge > 18) ? "major" : "minor";
	// printf("%s", legalAge);

	// long long howBigNumber = 0;
	// printf("What's your luck number ?\n");
	// scanf("%ld", &howBigNumber);
	// printf("\n\n");
	// long long i= 1, mult = 1, finalVal = 1;
	// while(i < howBigNumber)
	// {
	//     mult *= 2;
	//     finalVal = finalVal + mult;
	//     i++;
	// }
	// if((howBigNumber == 0) || (howBigNumber == 1)) printf("Top value is : %ld\n", howBigNumber);
	// else printf("Top value is :%ld\n", finalVal);

	// char sizeofShort;

	// do{
	//     printf("What's your usual short size?\n");
	//     scanf("%c", &sizeofShort);
	// }while(sizeofShort != 'S' && sizeofShort != 'M' && sizeofShort != 'L');
	// if(sizeofShort)
	//     printf("Your short's size '%c' is availbale\n", sizeofShort);


	// float Fx; 
	// int x;
	// printf("Enter x value\t\n");
	// scanf("%d", &x);

	// if( x <= -2){
	//     Fx = 8/x;
	//     printf("f(x) = %.2f\n", Fx);
	// }else if (-2 < x <= 0){
	//     Fx = pow(x, 3) + 4;
	//     printf("f(x) = %.2f\n", Fx);
	// }else if( x > 0){
	//     Fx = 4/pow(x, 2) + 1;
	//     printf("f(x) = %.2f\n", Fx);
	// }

	// switch(Fx){
	//     case(1): 
	//         printf("f(x) = %d", (float) 8/x);
	//     case(2):
	//         printf("f(x) = %d", (float) pow(x, 3) + 4);
	//      default:
	//         exit(0);
	//         break;
	// }

	// int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	// for(int i=0; i < 10; i++){
	//     printf("%d : %d\n", myArray[i], &myArray[i]);
	// }

	// char Mystring[30];
	// printf("What's your city?\t");
	// fgets(Mystring, 30, stdin);
	// printf("Your city %s is located on Canada", Mystring);

	// int ram1 = 12, ram2 = 15;
	// printf("random 1 : %p and random 2 : %p\n", &ram1, &ram2);
	// printf("random 1 : %d and random 2 : %d\n", &ram1, &ram2);
	// printf("random 1 : %d and random 2 : %d\n", sizeof(ram1), sizeof(ram2));

	// int *pRamd = &ram1;
	// printf("Pointer : %p\n", pRamd);
	// printf("Value is : %d\n", *pRamd);

	// int myArray[] = {1, 2, 4, 6}; 
	// printf("Pointer array is : %d\n", *(myArray + 2));
	// printf("Pointer array is : %d\n", myArray[2]);

	return 0;
}


