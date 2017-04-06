#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>

using namespace std;

struct Point{
    double x;
    double y;
};

double cross_product(Point a, Point b){
    return a.x * b.y - a.y * b.x;
}

double area1(Point a, Point b){
    // return abs(cross_product(a, b) / 2);
    return abs(cross_product(a, b) / 2.0);
}

double area2(Point a, Point b, Point c){
    // return abs(cross_product(a, b) / 2);
    return abs(
        cross_product(a, b) +
        cross_product(b, c) +
        cross_product(c, a)) / 2.0;
}

int main(){
    
    int i, j, k;
    int B[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
    int B1[3][3][3] = {{1,2,3},{10,20,30},{100,200,300}};

    // int (*p)[3] = B;
    // printf("%d\n", p);
    // printf("%d\n", (*p)[3]);
    // printf("%d\n", &B[0][0]);


    // int (*p)[3] = B;
    // int (*p)[2] = B;
    // printf("%d\n", B[0][0]);
    // printf("%d\n", B[0][1]);
    // printf("%d\n", B[0][2]);
    // printf("%d\n", B[1][0]);
    // printf("%d\n", B[1][1]);
    // printf("%d\n", B[1][2]);

    for(i = 0; i < 3; ++i){
        for(j = 0; j < 2; ++j){
            for(k = 0; k < 2; ++k){
                 printf("%d : %d : %d = %d\n",i,j,k, B[i][j][k]);
            }
        }
    }
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            for(k = 0; k < 3; ++k){
                 printf("%d : %d : %d = %d\n",i,j,k, B1[i][j][k]);
            }
        }
    }


    // struct Point A = {29, -15};
    // struct Point B = {15, 28};
    // struct Point C = {5, 2};
    // cout<<area1(A, B)<<endl;

    // int a;
    // int *p;
    // p = &a;
    // a = 5;
    // // cout<<p<<endl; 
    // printf("%d\n", p);
    // // cout<<p+1<<endl;
    //  printf("%d\n", p+2);
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<&a<<endl;

    // *p = 8;
    // cout<<a<<endl;


    return 0;
}