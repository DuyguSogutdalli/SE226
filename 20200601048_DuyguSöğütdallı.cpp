#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;
    int count;

public:
    // Constructor
    Queue() {
        front = rear = nullptr;
        count = 0;
    }

    // Function to add an element to the queue
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        count++;
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        count--;
    }

    // Function to return the front element of the queue
    int top() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to return the size of the queue
    int size() {
        return count;
    }

    // Destructor to free allocated memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.top() << endl;
    cout << "Queue size after dequeue: " << q.size() << endl;

    return 0;
}
