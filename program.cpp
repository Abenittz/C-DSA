#include <iostream>
#include <cstdlib>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};
typedef Node* nodeptr;

void insert(nodeptr& head){
    nodeptr temp;
    temp=new Node;
    temp->data=70;
    temp->link=head;
    head=temp;
}

int main(){
    nodeptr head=NULL;
    nodeptr temp;
    temp=new Node;
    temp->data=98;
    temp->link=NULL;
    if(head==NULL){
      head->link=temp;
    }
    else{
        nodeptr last;
        last=head;
        while(last->link!=NULL){
            last=last->link;
        }
        last->link=temp;
    }
    
    nodeptr tmp;
    tmp=head;
    while(tmp->link!=NULL){
        
        cout<< tmp->data<< "-->";
        tmp=tmp->link;
    }
}