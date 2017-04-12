#include<iostream>
#include<queue>
using namespace std;

struct BSTNode{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode * getNewNode(int data)
{
    BSTNode *newNode = new BSTNode();
    newNode->data = data;
    newNode->left, newNode->right = NULL;
    return newNode;
}


BSTNode* Insert(BSTNode *root,int data)
{
    if(root == NULL) root = getNewNode(data);
    else if(data <= root->data) root->left = Insert(root->left, data);
    else root->right = Insert(root->right, data);
    return root;
}

bool Search(BSTNode *root, int data)
{
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);
}
int FindMin(BSTNode *root){
    if(root == NULL){
        cout<<"Error : Tree Empty"<<endl;
        return -1;
    }else if(root->left != NULL){
        return root->data;
    }
    return FindMin(root->left);
}

int FindMax(BSTNode *root){
    if(root == NULL){
        cout<<"Error : Tree Empty"<<endl;
        return -1;
    }else if(root->right != NULL){
        return root->data;
    }
    return FindMin(root->right);
}


int FindHeight(BSTNode *root){
    if(root == NULL){
        cout<<"Error : Tree Empty"<<endl;
        return -1;
    }
    return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

int main(void){

    BSTNode *root = NULL;
    int getNumber, *p;

    // cout<<"How many number do you wanna stored? : ";
    // cin>>getNumber;

    // p = (int *)malloc(getNumber * sizeof(int));

    // for(int i = 0; i < getNumber; ++i){
    //     int numberEntered;
    //     cout<<"Add number : ";
    //     cin>>numberEntered;
    //     root = Insert(root, numberEntered);
    // }
    root = Insert(root, 1);
    root = Insert(root, 2);
    root = Insert(root, 30);
    root = Insert(root, 32);

    int number;
    cout<<"Enter number to be searched : ";
    cin>>number;
    if(Search(root, number) == true) cout<<"Found! "<<number<<"\n";
    else cout<<"Number not found\n";

    cout<<"Maximum tree : "<<FindMax(root)<<endl;
    cout<<"Minimum tree : "<<FindMin(root)<<endl;
    cout<<"Height tree : "<<FindHeight(root)<<endl;

}