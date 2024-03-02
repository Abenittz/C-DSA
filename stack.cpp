#include <iostream>
#include <cstdlib>
using namespace std;

#define size 100
int arr[size];
int top=-1;

void push(){
  system("cls");
  int n;
  char z;
  do{
    cout << "enter: ";
    cin>> n;
    if(top>=size-1){
    cout << "the stack is full";
    return;
    }
    else{
      arr[++top]=n;
    }
    cout << "to continue press y if not n: ";
    cin>>z;
  }while(z=='y');
}

void pop(){
  system("cls");
  if (top<=-1){
    cout << "the stack is empty";
    return;
  }
  else{
    top--;
  }
  cout << "succesfully deleted";
}

void display(){
  system("cls");
  for(int i=top; i<=0; i--){
    cout << arr[i]<<"-->";
  }
}

int main(){
  system("cls");
  int a;
  cout << "\t1:push\n\t2:pop\n\t3:display\n\t4:exit\n";
  cout << "enter your choice: ";
  cin>> a; 
  while(true){
    system("cls");
      switch(a){
        case 1:
          push();
          break;
        case 2:
          pop();
          break;
        case 3:
          display();
          break;
        case 4:
          return 1;
      }
  }
}