#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

// Stack class
class Stack {
private:
    Node* top; // pionter to the top node of the stack
    
public:
    Stack(){
        top = NULL; //Initialize the stack whit a null top pointer
    }

    //push operation: insert an element into the top of the stack
    int push(int value) {
        Node* newNode = new Node(); //1.allocate memory for the new node
        newNode->data = value; //2. assign value
        newNode->next = top; //3. set the next pinter of the new node to the current top
        top = newNode; //4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // pop operation: remove the topmost element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        }

        Node* temp = top; //create a temporary pointer to the top node
        top = top->next; // update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
    }

    
};