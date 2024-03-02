#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};
typedef Node* nodeptr;

void insert(nodeptr& head){
    char n;
    n=0;
    do{
        nodeptr temp;
        temp=new Node;
        temp->data=10;
        temp->link=NULL;
        if (head == NULL){
            head = temp;
            return;
        }else{
            nodeptr last;
            last=new Node;
            last=head;
            while(last->link != NULL){
                last=last->link;
            }
            last->link=temp;
        }
        n++;
    }while(n==3);
    
}

int main(){
    nodeptr head=NULL;
    
    insert(head);
}