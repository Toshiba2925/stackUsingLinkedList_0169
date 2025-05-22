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

   
};