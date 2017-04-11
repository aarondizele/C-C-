#include<cstdio>
#include<cstring>
#define MAX_SIZE 101
int A[MAX_SIZE]; //global var
int top=-1;//represent empty stack

void Push(int x){
    if(top == MAX_SIZE-1){
        printf("Error: stack overflow\n");
        return;
    }
    A[++top]= x;
    printf("%c",x);
}
void Pop(){
    if(top == -1){
        printf("Error: stack overflow\n");
        return;
    }
    printf("%c",A[top--]);
}

int main(){

    char str[] ="mycodeschool";
    int len = strlen(str), i;

    printf("Original String : ");

    for(i=0;i<len;i++)
        Push(str[i]);
        printf("\n");
        
    printf("Reversed String : ");

     for(i=0;i<len;i++)
        Pop();

    return 0;
}