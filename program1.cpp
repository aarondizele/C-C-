#include<iostream>
#include<string>
#include<math.h>
#include<stdio.h>
#include<ctype.h>

#define NAME "Aaron Dizele"
using namespace std;

// void getNumCalls(){
//     int numCalls = 0;
//     numCalls += 1;
//     cout<<"numCalls ="<<numCalls<<endl;
// }

int Fib(int x){

    int fib;
    // getNumCalls();

    // cout<<"Fib called with "<<x<<endl;
    if( x <= 1){ return x;}
    else{ fib = Fib(x - 1) + Fib(x - 2);}
    return fib;

}

int Fib1(int *n){

    int F, F1, F2;
    F1 = 0;
    F2 = 1;
    if(*n <= 1) return *n;
    for(int i = 2; i <= *n; i++){
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}

int F[51];

int FibF(int n){


    if( n <= 1) return n;
    if( F[n] != -1 ){
        return F[n];
    }
    F[n] = FibF(n - 1) + FibF(n - 2);
    return F[n];

}

int Pow(int x, int n){

    if(n == 0){ 
        return 1;
    }

    else{ 
        return x*Pow(x, n-1);
    }
}

int Pow1(int x, int n){

    int y;

    if(n == 0){ 
        return 1;
    }
    else if (n % 2 == 0){ 
        y = Pow(x, n/2);
        return y * y;
    }
    else{ 
        return x*Pow(x, n-1);
    }
}

int baseDecimal(char * number, int baseFrom, int sizeOfNumber){

    int result = 0;
    int toThePower = 0;

    for(int i = (sizeOfNumber - 2); i >= 0; --i){

        if(isalpha(number[i])){

            int charCode = ((int)tolower(number[i])) - 87;

            result += charCode * pow(baseFrom, toThePower);

        }else{

            result += (number[i] - '0') * pow(baseFrom, toThePower);

        }

        toThePower++;

    }
    cout<<number<<" in the base "<<baseFrom<<" equals "<<result<<" in base 10"<<endl;

    return result;

}


char * convertBase(unsigned int numberToConvert, int base){

    char buffer[33];
    char * pConvertedNumber;
    int i;

    char allValues[] = "0123456789ABCDEF";

    if(base < 2 || base > 16){
        cout<<"Enter number between 2 and 16"<<endl;
        return NULL;
    }

    pConvertedNumber = &buffer[sizeof(buffer) - 1];
    *pConvertedNumber = '\0';

    do{

        int value = numberToConvert % base;
        pConvertedNumber -= 1;
        // *pConvertedNumber = '0' + value;
        *pConvertedNumber = allValues[value];
        numberToConvert /= base;

    }while(numberToConvert != 0);

    cout<<pConvertedNumber<<endl;

}



int isPrime(int n){

    int i;
    bool isPrime = true;

    if(n == 1 || n == 0) {
        isPrime = false;
        cout <<n<<" is not a prime number";
        return -1;
    }

    for(int i = 2; i <= sqrt(n); ++i){

        if( n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime) 
        cout <<n<<" is a prime number";
    else
        cout <<n<<" is not a prime number";

    return n;
}



void allFactorList(int n)
{
    float A[65];
    for(int i = 1; i <= sqrt(n); i++){
        if( n % i == 0){
            A[i] = i;
            if( i != sqrt(n)){
                A[i] = n/i;
            }
        }
        // printf("%.2f  ", A[i]);
        cout<<A[i]<<" ";
    }
}

void primeFactorization(int n){
    int ct = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n = n/i;
                ct++;
            }
        }
        cout<<i<<" "<<ct<<endl;
    }
    if( n!= 1) cout<<n<<endl;

}


int euclidGCD(int a, int b)
{
    int remainder;
    int dividend = a >= b? a : b;
    int divisor = a <= b? a : b;

    while(divisor != 0){
        remainder = dividend  % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

int euclidGCD_recursive(int a, int b){
    return b == 0 ? a : euclidGCD_recursive(b, a%b);
}


int main(){

    int a, b;
    int c = a % b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Divident equals to : "<<euclidGCD_recursive(a, b)<<endl;

    ;

    // cout<<"a % b = "<<(float)c<<endl;

    // int p;
    // cout<<"Enter a number : ";
    // cin>>p;
    // primeFactorization(p);

//     int z;
//    printf("Enter a number : ");
//     scanf("%d", &z);
//     // int A[] = {2, 3, 4, 6, 1, 5};
//     allFactorList(z);
//     primeFactorization(z);
//     isPrime(z);
    // for(i = 0; i < 7; i++){
    //     cout<<A[i]<<" ";
    // }
        
    
    
    
    // int a;
    // cout<<"Enter a prime number : ";
    // cin>>a;
    // isPrime(a);

    // printf("a is : %d\n", 'a');
    // printf("A is : %d\n", 'A');

    // char numberToConvert[] = "74";
    // char numberToConvert1[] = "3C";

    // baseDecimal(numberToConvert, 8, sizeof(numberToConvert));
    // baseDecimal(numberToConvert1, 16, sizeof(numberToConvert1));

    // unsigned int numberOne;

    // cout<<"Enter number to convert : ";
    // cin>>numberOne;

    // cout<<numberOne<<" in Base 2 = ";
    // convertBase(numberOne, 2);


    // int n, b;
    // cout<<"Enter number : ";
    // cin>>n;
    // cout<<"Enter base : ";
    // cin>>b;
    // cout<<n<<" in Base "<<b<<" = ";
    // convertBase(n, b);
    // cout<<sizeof(convertBase(n, b))<<endl;

    // cout<<numberOne<<" in Base 16 = ";
    // convertBase(numberOne, 16);

    // for(int i = 0; i < 51; i++){
    //     F[i] = -1;
    // }
    // F[0] = F[1] = 1;

    // int fib;
    // cout<<"Enter Fibonacci number : ";
    // cin>>fib;

    // int x, a;

    // cout<<"Enter x and a: ";

    // cin>>x>>a;

    // int resultPow = Pow(x, a);
    // int resultPow1 = Pow1(x, a);
    
    // cout<<x<<" exponent "<<a<<" = "<< (long int) resultPow<<endl;
    // cout<<x<<" exponent "<<a<<" = "<< (long int) resultPow1<<endl;
    // cout<<"Fibonacci of "<<fib<<" = "<< Fib1(&fib)<<endl;
    // cout<<"Fibonacci of "<<fib<<" = "<< FibF(fib)<<endl;


}
