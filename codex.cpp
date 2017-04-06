#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct Node{
    int data;
    Node *next;
};
struct Node *A = NULL;
struct Node *head;
void function(){
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = 2;
    temp->next = NULL;
    A = temp;
    cout<<A<<endl;
    cout<<temp<<endl;
}



struct Node* Insert(struct Node* head, int data){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) head = temp;
    else{
        struct Node* temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}



// reverse a linked list
void Reverse(){
    struct Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){

    function();

    return 0;
}