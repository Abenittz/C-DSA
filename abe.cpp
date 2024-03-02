#include<iostream>
using namespace std;

#define MAXSIZE 100  // maximum size of the stack

int stack[MAXSIZE]; // define the stack
int top = -1; // initialize the top of the stack

// function to push element onto the stack
void push(int element) {
    if (top == MAXSIZE - 1) { // check if stack is full
        cout << "Stack Overflow!" << endl;
    }
    else {
        stack[++top] = element; // increment top and add element to stack
    }
}

// function to pop element from the stack
void pop() {
    if (top == -1) { // check if stack is empty
        cout << "Stack Underflow!" << endl;
    }
    else {
        cout << "Popped Element: " << stack[top--] << endl; // decrement top and remove element from stack
    }
}

// function to return the top-most element of the stack
int peek() {
    if (top == -1) { // check if stack is empty
        cout << "Stack is Empty!" << endl;
        return -1;
    }
    else {
        return stack[top]; // return the element at the top of the stack
    }
}

// function to display the stack
void display() {
    if (top == -1) { // check if stack is empty
        cout << "Stack is Empty!" << endl;
    }
    else {
        cout << "Elements in the Stack are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << "\t"; // print the elements of the stack
        }
        cout << endl;
    }
}

// main function to test the code
int main() {
    int choice, element;

    do {
        cout << endl << "Enter your Choice:" << endl;
        cout << "1. Push Element" << endl;
        cout << "2. Pop Element" << endl;
        cout << "3. Peek Element" << endl;
        cout << "4. Display Stack" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the Element to Push: ";
                cin >> element;
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                element = peek();
                if (element != -1) {
                    cout << "Top Element: " << element << endl;
                }
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting Program. Thank You!" << endl;
                break;
            default:
                cout << "Invalid Choice! Please Try Again." << endl;
        }
    } while (choice != 5);

    return 0;
}