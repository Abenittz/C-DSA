#include <iostream>
#include <queue>

using namespace std;

// Function for enqueuing an element
void enQueue(queue<int>& q, int element)
{
    cout << "Enqueuing " << element << endl;
    q.push(element);
}

// Function for dequeuing an element
void deQueue(queue<int>& q)
{
    if (q.empty())
        cout << "The queue is empty" << endl;

    else {
        cout << "Dequeuing " << q.front() << endl;
        q.pop();
    }
}

// Function for displaying the elements in the queue
void displayQueue(queue<int> q)
{
    if (q.empty())
        cout << "The queue is empty" << endl;

    else {
        cout << "The elements in the queue are: ";
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}

int main()
{
    queue<int> q;
    enQueue(q, 10);
    enQueue(q, 20);
    enQueue(q, 30);
    deQueue(q);
    displayQueue(q);
    
    return 0;
}
