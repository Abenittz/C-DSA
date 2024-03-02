#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Node{
    int data;
    Node* link;
};
Node* head=NULL;

void insert(){
    system("cls");
    int n;
    char choice;
    do{
        cout<<"enter the element: "<<endl;
        cin>>n;
        Node* temp=new Node;
        temp->data=n;
        temp->link=head;
        head=temp;
        cout << "if you want to continue press y if not n: ";
        cin>>choice;
    }while(choice=='y');
    
}

void insertback(){
    system("cls"); 
    int n;
    char choice;
    do{
        cout <<"enter the element: "<<endl;
        cin >> n;
        Node* last;
        Node* temp;
        temp=new Node;
        temp->data=n;
        temp->link=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            last=head;
            while(last->link!=NULL){
                last=last->link;
            }
        last->link=temp;
        }
        cout <<"if you want to continue press y if not n: ";
        cin>>choice;
    }while(choice=='y');

}

void insertAtNth(){
    system("cls");
    int n;
    int a;
    char choice;
    do{
        cout << "enter the position: ";
        cin>> n;
        cout << "enter the element: ";
        cin>> a;
        Node* temp;
        temp=new Node;
        temp->data=a;
        temp->link=NULL;

        if(n==1){
            temp->link=head;
            head=temp;
            return;
        }
        Node* nth=head;
        for(int i=1; i<(n-1)&&nth!=NULL; i++){
            nth=nth->link;
        }

        if(nth==NULL){
            cout << "error the number you enter is not in list";
            return;
        }

        temp->link=nth->link;
        nth->link=temp;

        cout << "do you want to continue (y/n): ";
        cin>> choice;

    }while(choice=='y');
}

void search(){
    
    if(head==NULL){
        cout << "the list is empty";
    }
    int n=0;
    int num;
    cin>> num;
    Node* temp=head;
    while(temp!=NULL){
        
        temp=temp->link;
        if(temp->data==num){
            n++;
        }cout << "there is "<< n <<" of them are here";
    }
    
}

void deletefront(){
    system("cls");
    char choice;
    do{
        Node* temp;
        temp=head;
        head=head->link;
        delete temp;
        cout << "the first element is succesfully deleted\n--------------\n";
        cout << "Do you want to continue(y/n): " ;
        cin>> choice;
    }while(choice=='y');
}

void deletelast(){
    system("cls");
    int count=0;
    char choice;
    do{
        Node* temp;
        temp=head;
        while(temp!=NULL){
            temp=temp->link;
            count++;
        }
        Node* last;
        Node* del;
        last=head;
        for(int i=1;i<count-1; i++){
            last=last->link;
        }
        del=last->link;
        last->link=NULL;
        delete del;
        cout << "The last element succesfully deleted\n";
        cout << "---------------------------------------\n\n";
        cout << "Do you want to continue(y/n): ";
        cin>> choice;
    }while(choice=='y');
}

void deleteAtNth(){
    int n;
    char choice;
    do{
        
        cout << "Enter the position you want to delete: ";
        cin>>n;
        Node* nth=head;
        Node* temp;

        if(n==1){
            head=head->link;
            delete nth;
            return;
        }

        for(int i=1; i< n-1 && nth!=NULL; i++){
            nth=nth->link;
        }
        if(nth==NULL){
            cout <<"error the position is not in here";
        }
        temp=nth->link;
        nth->link=temp->link;
        delete temp;
        cout << "do you want to continue(y/n): ";
        cin>> choice;
    }while(choice=='y');
    
}

void retrieve(){
    system("cls");
    int n;
    char choice;
    do{
        cout << "Enter the position: ";
        cin>> n;
        Node* temp=head;
        for(int i=1; i<n && temp->link!=NULL; i++){
            temp=temp->link;
        }
        if(temp==NULL){
            cout<< "error";
            return;
        }

        cout <<"The element is: "<< temp->data << endl;
        cout << "Do you want to continue(y/n): ";
        cin >> choice;
    }while(choice=='y');
    
}

void display(){
    system("cls");
    char choice;
    do{
        if(head==NULL){
            cout << "the list is empty\n";
        }
        Node* tmp;
        tmp=head;
        cout << "here is the list: "<<endl;
        while(tmp!=NULL){
            cout << tmp->data<<"-->";
            tmp=tmp->link;
        }
        cout <<endl;
        cout <<endl;
        cout << "press 'm' to return to menu: ";
        cin>>choice;
    }while(choice=='z');
       
    
}

int main(){
    a:
    system("cls");
    int a;
    while(true){
        system("cls");
        cout << "\t*****************************************\n";
        cout << "\t|     LINKED LIST OPERATION PROGRAM     |\n";
        cout << "\t|\t                                |\n";
        cout << "\t|\t1:Insert at the beginning       |\n";
        cout << "\t|\t2:Insert at the back            |\n";
        cout << "\t|\t3:Insert at nth                 |\n";
        cout << "\t|\t4:Delete the first elemenet     |\n";
        cout << "\t|\t5:Dlete the last element        |\n";
        cout << "\t|\t6:Delete at nth                 |\n";
        cout << "\t|\t7:Look at nth position          |\n";
        cout << "\t|\t8:Display                       |\n";
        cout << "\t|\t9:Exit                          |\n";
        cout << "\t*****************************************\n";
        cout << "\t\tEnter your choice here: ";
        cin>>a;
        switch(a){
            case 1:
                insert();
                break;
            case 2:
                insertback();
                break;
            case 3:
                insertAtNth();
                break;
            case 4:
                deletefront();
                break;
            case 5:
                deletelast();
                break;
            case 6:
                deleteAtNth();
                break;
            case 7:
                retrieve();
                break;
            case 8:
                display();
                break;
            case 9:
                return 1;
            case 10:
                search();
                break;
            default:
                goto a;
        }
    }
    
}