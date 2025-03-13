#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {  
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* head;
    int num;
    int capacity;

public:
    Stack(int initialCapacity) {
        head = nullptr;
        num = 0;
        capacity = initialCapacity;
    }

    void push(int x) {
        if (num >= capacity) {
            increaseCapacity();
        }
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        num++;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        Node* temp = head;
        int poppedValue = temp->data;
        head = head->next;
        delete temp;
        num--;
        return poppedValue;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return num <= 0;
    }

    void increaseCapacity() {
        capacity = num * 2;
    }

    bool deleteElement(int val) {
        if (isEmpty()) return false;
        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr && temp->data != val) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) return false;
        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }
        delete temp;
        num--;
        return true;
    }
};

int main() {
    return 0;
}
