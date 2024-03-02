#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;

void enqueue(){
    Node* temp;
    temp=new Node;
    temp->data=10;
    temp->next=NULL;

    if(front==NULL&&rear==NULL){
        front = rear = temp;
    }
    rear->next=temp;
    rear=temp;
}

void dequeue(){
    if(front==NULL){
        return;
    }
    if(front=rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
        
    }
    free(front);
}

bool is_empty(){
    if(front==NULL && rear==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    enqueue();
    dequeue();

}