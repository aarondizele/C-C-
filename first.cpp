#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


/*
===========================================
    Class
===========================================
*/

// class Animal{

//     private:
//         int height;
//         int weight;
//         string name;

//         static int numOfAnimals;
    
//     public:

//         int getHeight(){ return height; }
//         int getWeight(){ return weight; }
//         string getName(){ return name; }

//         void setHeight(int cm){ height = cm; }


// }


// int getFactorial(int number){

//     int sum;
//     if(number == 1) sum = 1;
//     else sum = getFactorial(number - 1) * number;
//     return sum;

// }


int main(){

/*
===========================================
Pointer
===========================================
*/


int age = 22;

cout << "Age is located at "<<&age<<endl;



/*
===========================================
Catching error
===========================================
*/

// int number = 0;

// try{

//     if(number != 0){
//         cout << 2/number << endl;
//     }else throw(number);

// } catch(int number){
//     cout << number << " is not valid" <<endl;
// }





/*
===========================================
File
===========================================
*/

    // string steveQuote = "A day without sunshine is like, you know, night";

    // ofstream writer("stevequote.txt");

    // if(!writer){
    //     cout << "Error opening file" <<endl;
    //     return -1;
    // } else{
    //     writer << steveQuote << endl;
    //     writer.close();
    // }

    // ofstream writer2("stevequote.txt", ios::app);
    // if(!writer2){
    //     cout << "Error opening file" <<endl;
    //     return -1;
    // } else{
    //     writer2 << "\n -Steve Martin" << endl;
    //     writer2.close();
    // }

    // char letter;

    // ifstream reader("stevequote.txt");

    // if(!reader){
    //     cout << "Error opening file" <<endl;
    //     return -1;
    // }else{
    //     for(int i = 0; !reader.eof(); i++){

    //         reader.get(letter);
    //         cout<<letter;
    //     }

    //     cout <<endl;
    //     reader.close();
    // }







/*
===========================================
Recursive functions
===========================================
*/

// string numberFactorial;
// int convert;


// // getline(cin, numberFactorial);

// // convert = stoi(numberFactorial);

// cout << "The factorial of 4 is " <<getFactorial(4)<<endl;






    // cout<<"Hello World"<<endl;

    // bool happiness = (happiness == true) ? "True" : "False";

    // int sizeInt = sizeof(int);
    // short int sizeShort = sizeof(short int);
    // long int sizeLong = sizeof(long int);
    // double sizeDouble = sizeof(double);
    // long double sizeLongDouble = sizeof(long double);

    
    
    // int five = 5;
    // int enter;

    // cout<<"Enter prime number : "<<endl;
    // // getline(cin, enter);
    // cin <<enter<<endl;
    // int result = enter / 2;

    // cout << "Result is : " << result << endl;

    // cout << "Are you happy ? " << happiness << endl;
    // cout << "Size of integer : " << sizeInt << endl;
    // cout << "Size of short int : " << sizeShort << endl;
    // cout << "Size of long int : " << sizeLong << endl;
    // cout << "Size of double : " << sizeDouble <<endl;
    // cout << "Size of long double : " << sizeLongDouble << endl;

    // cout << "5++ : " << five++ << endl; // five + 1 = 6
    // cout << "++5 : " << ++five << endl; // 1 + five = 7
    // cout << "5-- : " << five-- << endl; // 7 - 1 = 6
    // cout << "--5 : " << --five << endl; // 1 - 6 = 5


    // for(int j = 0; j <= 10; j++){
    //     cout << j <<endl;
    // }

    // int randNum = (rand() % 100) + 1;

    // while(randNum != 100){

    //     cout << randNum << "\n";
    //     randNum = (rand() % 100) + 1;

    // }

    // cout << endl;


    double eulersConstant = .57721;
    string eulerGuess = "I'm tall";
    double eulerGuessDouble;

    // cout << "What is Euler's Constant? "<<endl;
    // getline(cin, eulerGuess);

    // eulerGuessDouble = stod(eulerGuess);

    // if(eulerGuessDouble == eulersConstant){
    //     cout << "You're right" <<endl;
    // }else{
    //     cout << "You lose"<<endl;
    // }

    cout<< "Size of String ? " << eulerGuess.size() <<endl;
    // cout<< "Is string empty ? " <<eulerGuess.empty() <<endl;
    cout<< eulerGuess.append(" was your guess") <<endl;

    /*
    =======================================
        String comparison
    =======================================
    */

    // string dog = "Dog";
    // string cat= "Cat";

    // cout << dog.compare(cat) << endl;
    // cout << cat.compare(dog) << endl;
    // cout << dog.compare(dog) << endl;


    // string yourName;
    // cout << "What is your name ?"<<endl;
    // getline(cin, yourName);

    // cout << "Hello "<<yourName<<endl;

    // string wholeName = yourName.assign(yourName);
    // cout << wholeName <<endl;

    // string firstName = wholeName.assign(wholeName, 0, 12); // start with index 0 to 12
    // cout << firstName <<endl;

    // yourName.insert(6, "Laxis ");
    // cout << yourName <<endl;

    // yourName;

    // yourName.erase(6, 12);
    // cout << yourName <<endl;

/*
=======================================
Vector
=======================================
*/
    vector <int> lotteryNumVect(10);

    int lotteryNumArray[5] = {4, 6, 89, 34, 56};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
    cout << lotteryNumVect.at(2) << endl;

    

    lotteryNumVect.push_back(64);
    cout << lotteryNumVect.back() << endl;

    lotteryNumVect.pop_back();
    cout << lotteryNumVect.back() << endl;
















    return 0;
}