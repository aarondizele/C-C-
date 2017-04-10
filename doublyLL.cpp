#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;

struct Node* getNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    (*newNode).data = x;
    (*newNode).next = NULL;
    (*newNode).prev = NULL;

    return newNode;
}

void InsertAtHead(int x)
{
    struct Node* newNode = getNewNode(x);

    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void Print()
{
    struct Node* temp = head;
    cout<<"Forward: "<<endl;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    // InsertAtHead(2); Print();
    // InsertAtHead(4); Print();
    // InsertAtHead(6);
    int numberToStored, i;
    int *p;

    cout<<"How time do you wanna store data? : ";
    cin>>numberToStored;

    p = (int *)malloc(numberToStored*sizeof(int));

    do{
        int numberEntered;
        cout<<"Enter a number : ";
        cin>>numberEntered;
        InsertAtHead(numberEntered);
    }while(i < numberToStored);

    Print();

    return 0;
}