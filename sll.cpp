#include <iostream>

using namespace std;
struct node
{
    int date;
    node*nxt;
};
node*head=NULL;

void insert_frist()
{
    node*temp=new node;
    cout<<"pls enter your date : ";
    cin>>temp->date;
    if(head==NULL){
        head=temp;
        temp->nxt=NULL;
    }
    else{
        temp->nxt=head;
        head=temp;
    }

}
 
void display()
{
    node*temp=head;
    if(head==NULL){
        cout<<"sorry the list is empty";
    }
    while(head!=NULL){
        cout<<temp->date;
        temp=temp->nxt;
    }
}
/*
void deli_first()
{
if(head==NULL)
{
	cout<<"the list is empty";
	
}
else
{
	node*temp;
	temp=head;
	head=head->nxt;
	delete temp;
}
	
}

void insert_last()
{
   node*temp;
   node*temp2;
   temp=new node;
   cout<<"pls enter your date:";
   cin>>temp->date;
   temp->nxt=NULL;
   if(head==NULL)
   {
   	head=temp;
   }
   else
   {
   	temp2=head;
   	while(temp2->nxt!=NULL)
   	{
   		temp2=temp2->nxt;
    }
    temp2->nxt=temp;
   	
   }
   
}

void dil_last()
{
    node* temp1;
    node* temp2;
    if(head==NULL){
        cout << "there is no element to delete";
        return;
    }
    else{
        temp1=head;
        while(temp1->nxt!=NULL){
            temp1=temp1->nxt;
        }
       delete temp1;
        temp2=head;
        while(temp2->nxt!=NULL){
            temp2=temp2->nxt;
        }
        temp2->nxt=NULL;
        cout << "here is the list";
        
    }
}
*/

int main()
{
    insert_frist();
    void display();
     return 0;
}