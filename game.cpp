#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int cash;

void Play(int bet){

    int playerGuess;
    char *C = (char *)malloc(10000*sizeof(char));
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    cout<<"Shuffling... "<<endl;
    srand(time(1000));

    for(int i = 0; i < 5; i++){
        int temp;
        int x = rand() % 3;
        int y = rand() % 3;
        temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    
    cout<<"What is the position of QUEEN ? 1 - 2 or 3 : ";
    cin>>playerGuess;

    if(C[playerGuess - 1] == 'Q'){
        cash += 3*bet;
        cout<<"You win!!! Bravo...\nAmount of your account : "<<cash<<endl;
    }else{
        cash -= bet;
        cout<<"You loose!!! Try again...\nAmount of your account : "<<cash<<endl;
    }

    free(C);

}

int main()
{
    int bet;
    cout<<"Enter amount to bet : $";
    cin>>cash;
    // cout<<"Amount : $"<<cash<<endl;

    while(cash > 0){
        cout<<"What's your bet? $";
        cin>>bet;
        if(bet <= 0 || bet > cash){
            cout<<"You don't have enough money in your account to bet"<<endl;
            break;
        }
        Play(bet);
    }

    return 0;
}