#include <iostream>
using namespace std;

#define max 100
string stack[max];
int top = -1;

int main(){
    string name;
    cout << "enter a word: ";
    cin>> name;
    for(int i=0; i< name.size(); i++){
        if (top == max - 1) {
        cout << "the stack is full" << endl;
        }
        else {
            stack[++top] = name[i]; 
        }
    }

    if (top == -1) {
        cout << "Stack is Empty!" << endl;
    }
    else{
        cout << "the reversed word: ";
        for(int i=top; i>=0; i--){
            cout<< stack[i];
        }
    }
   
}